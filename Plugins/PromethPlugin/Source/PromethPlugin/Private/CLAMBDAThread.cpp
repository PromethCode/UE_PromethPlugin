// Fill out your copyright notice in the Description page of Project Settings.


#include "CLAMBDAThread.h"

TMap<FString, LAMBDAThread*> LAMBDAThread::ThreadMap = TMap<FString, LAMBDAThread*>();
int32 LAMBDAThread::clockTime = 0;
int32 LAMBDAThread::NowTimeThreadNum = 0;

LAMBDAThread::LAMBDAThread(FString Name, TFunction<void()> FunInstance) :ThreadName(Name), FunPtr(FunInstance)
{
	// ��ȡFEventָ��
	this->ThreadEvent = FPlatformProcess::GetSynchEventFromPool();
	// �����߳�
	this->ThreadInstance = FRunnableThread::Create(this, *ThreadName, 0, TPri_BelowNormal);

}

LAMBDAThread::~LAMBDAThread()
{
	delete this->ThreadEvent;
	delete this->ThreadInstance;

	this->ThreadEvent = nullptr;
	this->ThreadInstance = nullptr;
}

bool LAMBDAThread::Init()
{
	return true;
}

uint32 LAMBDAThread::Run()
{


	if (this->FunPtr)
		this->FunPtr();


	this->bRun = false;
	//LAMBDAThread::CloseObjectThread(this->ThreadName);

	return 0;
}

void LAMBDAThread::Stop()
{
	this->bRun = false;
}

void LAMBDAThread::Exit()
{

	UE_LOG(LogTemp, Warning, TEXT("Thread:%s is Exit"), *ThreadName);
	//LAMBDAThread::CloseObjectThread(this->ThreadName);
	//ThreadMap.Remove(ThreadName);

}

void LAMBDAThread::PauseThread()
{
	this->bPause = true;
}



void LAMBDAThread::WakeUpThread()
{
	this->bPause = false;
	// ���Ѻ���
	ThreadEvent->Trigger();
}

void LAMBDAThread::CloseThread()
{
	this->Stop();
	if (this->bPause)
		this->WakeUpThread();
	// �ȴ����н���
	this->ThreadInstance->WaitForCompletion();

}



/*
�����߳�����  �д��뺯��
*/
FString LAMBDAThread::CreateObjectThread(TFunction<void()> FunInstance, const FString& ObjectThreadName)
{
	//�ж�Runnable�Ƿ�����Լ��Ƿ�֧�ֶ��߳�
	FString ThreadName = ObjectThreadName.IsEmpty() ? LAMBDAThread::GetNewName() : ObjectThreadName;


	//if (FPlatformProcess::SupportsMultithreading() && (!ThreadMap.Find(ThreadName) || LAMBDAThread::TheadIsEnd(ThreadName)))
	//{
	//	TSharedPtr<LAMBDAThread> NewThread = MakeShareable(new LAMBDAThread(ThreadName, FunInstance));
	//	//��FRunnableʵ������ThreadMap��
	//	ThreadMap.Add(ThreadName, NewThread);
	//}
	LAMBDAThread::ThreadMap.Add(ThreadName, new LAMBDAThread(ThreadName, FunInstance));
	LAMBDAThread::ClearFinishThread();
	return ThreadName;
}

void LAMBDAThread::ClearFinishThread()
{
	TArray<FString> ThreadKeys;
	LAMBDAThread::ThreadMap.GetKeys(ThreadKeys);
	for (auto key : ThreadKeys) {
		auto tempThread = LAMBDAThread::ThreadMap[key];
		if (!tempThread->bRun) {
			tempThread->ThreadInstance->Kill(0);
			LAMBDAThread::ThreadMap.Remove(key);
			delete tempThread;
		}
	}
}

/*
�ж� �߳��Ƿ����
���ѽ��������ٺ󷵻�true
���򷵻�false
*/
bool LAMBDAThread::TheadIsEnd(const FString& ObjectThreadName)
{
	if (auto ThreadData = LAMBDAThread::ThreadMap.Find(ObjectThreadName)) {
		if ((*ThreadData)->bRun)
			return false;
		else
			LAMBDAThread::CloseObjectThread(ObjectThreadName);
	}

	return true;
}

/*
�ر��߳�
��TMAP���Ƴ�  ����ָ���Զ�GC
*/
bool LAMBDAThread::CloseObjectThread(const FString& ObjectThreadName)
{

	if (auto ThreadData = LAMBDAThread::ThreadMap.Find(ObjectThreadName)) {
		//ThreadMap.Empty();
		(*ThreadData)->CloseThread();

		ThreadMap.Remove(ObjectThreadName);
	}

	return true;
}
/*
���ѻ���ͣ
*/
void LAMBDAThread::WakeUpThread(const FString& ObjectThreadName)
{
	if (auto ThreadData = LAMBDAThread::ThreadMap.Find(ObjectThreadName))
		(*ThreadData)->WakeUpThread();

}
void LAMBDAThread::PauseThread(const FString& ObjectThreadName)
{
	if (auto ThreadData = LAMBDAThread::ThreadMap.Find(ObjectThreadName))
		(*ThreadData)->PauseThread();
}
FString LAMBDAThread::GetNewName()
{
	FString ResName = "";
	if (LAMBDAThread::clockTime == clock()) {
		++LAMBDAThread::NowTimeThreadNum;
	}
	else {
		LAMBDAThread::clockTime = clock();
		LAMBDAThread::NowTimeThreadNum = 0;
	}
	ResName += FString::FromInt(LAMBDAThread::clockTime);
	ResName += TEXT("_");
	ResName += FString::FromInt(LAMBDAThread::NowTimeThreadNum);
	return ResName;
}
