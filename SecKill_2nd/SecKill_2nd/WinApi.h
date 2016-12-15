using namespace System::Runtime::InteropServices; 

namespace WinApi
{
//Mesagebox
	[DllImport("user32.dll",CharSet=CharSet::Auto)]
int MessageBox(void* hWnd,wchar_t* text,wchar_t* caption,unsigned int type);

//HANDLE OpenProcess(
//    DWORD dwDesiredAccess,// access flag
//    BOOL bInheritHandle, // handle inheritance flag
//    DWORD dwProcessId  // process identifier
//    );
[DllImport("kernel32.dll")]
void* OpenProcess(unsigned int dwDesiredAccess, unsigned int bInheritHandle, unsigned int dwProcessId);

//BOOL CloseHandle(
//    HANDLE hObject  // handle to object to close
//    );
[DllImport("kernel32.dll")]
unsigned int CloseHandle(void* hObject);

//BOOL WriteProcessMemory(
//    HANDLE hProcess, // handle to process whose memory is written to
//    LPVOID lpBaseAddress, // address to start writing to
//    LPVOID lpBuffer, // pointer to buffer to write data to
//    DWORD nSize, // number of bytes to write
//    LPDWORD lpNumberOfBytesWritten  // actual number of bytes written
//    );
[DllImport("kernel32.dll")]
int WriteProcessMemory(void* hProcess, void* lpBaseAddress, unsigned int lpBuffer[], unsigned int nSize, void* lpNumberOfBytesWritten);

//BOOL ReadProcessMemory(
//    HANDLE hProcess, // handle of the process whose memory is read
//    LPCVOID lpBaseAddress, // address to start reading
//    LPVOID lpBuffer, // address of buffer to place read data
//    DWORD nSize, // number of bytes to read
//    LPDWORD lpNumberOfBytesRead  // address of number of bytes read
//    );
[DllImport("kernel32.dll")]
int ReadProcessMemory(void* hProcess, void* lpBaseAddress, unsigned int lpBuffer[], unsigned int nSize, void* lpNumberOfBytesRead);

//member

//
//unsigned int PROCESS_ALL_ACCESS=0x001F0FFF;




[DllImport("user32.dll")]
long SendMessage(void* hwnd,unsigned int meg,unsigned int key,unsigned int info);

[DllImport("user32.dll")]
long PostMessage(void* hwnd,unsigned int meg,unsigned int key,unsigned int info);

[DllImport("user32.dll")]
void* FindWindowA(void* cname,void* wname);

[DllImport("User32.dll", CharSet = CharSet::Auto)]
int GetWindowText(void* hWnd,wchar_t* text, int nMaxCount);   
//

[DllImport("kernel32.dll")]
void Sleep(int time);

}//end of class WinApi

