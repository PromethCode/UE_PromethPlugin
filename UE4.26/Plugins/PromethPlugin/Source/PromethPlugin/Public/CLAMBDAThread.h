// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "HAL/Runnable.h"
#include "GameFramework/Actor.h"

/**************************************************/
/*
���÷�����
	FString ThreadName = LAMBDAThread::CreateObjectThread([=]() {
		for (int i = 0; i < 50; ++i) {
			UE_LOG(LogTemp, Warning, TEXT("---------------------------------ThreadNum:  %d"), i);
			FPlatformProcess::Sleep(0.1);
		}
		});
	LAMBDAThread::WakeUpThread(ThreadName);
*/
/**************************************************/
class PROMETHPLUGIN_API LAMBDAThread :public FRunnable {
public:
	LAMBDAThread(FString Name, TFunction<void()> FunInstance);
	~LAMBDAThread();

public:
	// �߳�ʵ��
	FRunnableThread* ThreadInstance;
	// �߳��¼�����
	FEvent* ThreadEvent;
	// �߳�����
	FString						ThreadName;
	//���ڿ����̹߳���/����״̬
	bool								bPauseThread = false;
	//���ڿ����߳̽��� trueΪ��������
	bool								bRun = true;
	// ��ͣ�߳�
	bool								bPause = false;
	// ����ָ��
	UPROPERTY()
		TFunction<void()>	FunPtr = nullptr;

	/*Static Param*/
	// ���ù���ָ�� GC
	static TMap<FString, LAMBDAThread*> ThreadMap;
	static int32 clockTime;
	static int32 NowTimeThreadNum;
public:
	// ��ʼ���߳�
	virtual bool Init() override;
	//ִ���߳�
	virtual uint32 Run() override;
	//��ͣ�߳�
	virtual void Stop() override;
	// �˳� Run�����Զ�ִ��
	virtual void Exit() override;

public:
	void PauseThread();
	void WakeUpThread();
	void CloseThread();

	static FString CreateObjectThread(TFunction<void()> FunInstance, const FString& ObjectThreadName = "");
	static void ClearFinishThread();

	// �ж��߳��Ƿ����
	static bool TheadIsEnd(const FString& ObjectThreadName);
	// �ر��߳�
	static bool CloseObjectThread(const FString& ObjectThreadName);
	// �����߳�
	static void WakeUpThread(const FString& ObjectThreadName);
	// ��ͣ�߳�
	static void PauseThread(const FString& ObjectThreadName);
	/*******************************************************************************/


	static FString GetNewName();

};
