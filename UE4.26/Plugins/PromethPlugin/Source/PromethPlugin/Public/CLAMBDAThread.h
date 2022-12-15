// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "HAL/Runnable.h"
#include "GameFramework/Actor.h"

/**************************************************/
/*
调用方法：
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
	// 线程实例
	FRunnableThread* ThreadInstance;
	// 线程事件调用
	FEvent* ThreadEvent;
	// 线程名称
	FString						ThreadName;
	//用于控制线程挂起/激活状态
	bool								bPauseThread = false;
	//用于控制线程结束 true为正在运行
	bool								bRun = true;
	// 暂停线程
	bool								bPause = false;
	// 函数指针
	UPROPERTY()
		TFunction<void()>	FunPtr = nullptr;

	/*Static Param*/
	// 采用共享指针 GC
	static TMap<FString, LAMBDAThread*> ThreadMap;
	static int32 clockTime;
	static int32 NowTimeThreadNum;
public:
	// 初始化线程
	virtual bool Init() override;
	//执行线程
	virtual uint32 Run() override;
	//暂停线程
	virtual void Stop() override;
	// 退出 Run结束自动执行
	virtual void Exit() override;

public:
	void PauseThread();
	void WakeUpThread();
	void CloseThread();

	static FString CreateObjectThread(TFunction<void()> FunInstance, const FString& ObjectThreadName = "");
	static void ClearFinishThread();

	// 判断线程是否结束
	static bool TheadIsEnd(const FString& ObjectThreadName);
	// 关闭线程
	static bool CloseObjectThread(const FString& ObjectThreadName);
	// 唤醒线程
	static void WakeUpThread(const FString& ObjectThreadName);
	// 暂停线程
	static void PauseThread(const FString& ObjectThreadName);
	/*******************************************************************************/


	static FString GetNewName();

};
