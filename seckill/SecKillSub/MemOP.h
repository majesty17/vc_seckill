#pragma once
/*
* Created by SharpDevelop.
* User: hang
* Date: 2010-1-5
* Time: 19:50
* 
* To change this template use Tools | Options | Coding | Edit Standard Headers.
*/
#include "RefWinApi.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace System::Runtime::InteropServices;


ref class MemOP
{
//进程句柄
	public:IntPtr ProcessHandle;
//进程ID
	public: array<System::Diagnostics::Process ^>^ ProcessID;
//是否找到
	public: bool find;

	public: MemOP::MemOP(String^ ProcessName)
	{
		GetProcessHandle(ProcessName);
	}

//Get Process handle
	private: void GetProcessHandle(String^ ProcessName)
	{
		this->ProcessID=System::Diagnostics::Process::GetProcessesByName(ProcessName);
		if(this->ProcessID->Length>0)
		{
			this->ProcessHandle=(System::IntPtr)RefWinApi::OpenProcess(0x001F0FFF,0,(UInt32)ProcessID[0]->Id);
			find=true;
		}
		else
		{
			MessageBox::Show("Get ProcessID fail!");
			find=false;
		}
	}

//Read memory data
public: bool Read(IntPtr StartAddress,unsigned int DataBuf[],UInt32 length)
{
	bool isRead=false;
	Int32 s=RefWinApi::ReadProcessMemory((void*)this->ProcessHandle,(void*)StartAddress,DataBuf,length,(void*)0);
	if(s!=0)
	{
		isRead=true;
	}
	return isRead;
}

//Write data to memory
public: bool Write(IntPtr StartAddress,unsigned int Data[],UInt32 length)
	{
		bool isWrite=false;
		Int32 s=RefWinApi::WriteProcessMemory((void*)this->ProcessHandle,(void*)StartAddress,Data,length,(void*)0);
		if(s!=0)
		{
			isWrite=true;
		}
		return isWrite;
	}

//Close Handle
public: void Close()
	{
		RefWinApi::CloseHandle((void*)this->ProcessHandle);
	}
};

