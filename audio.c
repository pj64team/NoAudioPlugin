#include <Windows.h>
#include <stdio.h>

#include "audio.h"

AUDIO_INFO AudioInfo;


EXPORT void CALL
AiDacrateChanged( int SystemType )
{
}

EXPORT void CALL
AiLenChanged( void )
{
}

EXPORT DWORD CALL
AiReadLength( void )
{
	return 0;
}

EXPORT void CALL
AiUpdate( BOOL Wait )
{
}

EXPORT void CALL
CloseDLL( void )
{
}

char DLL_about[] =
"No Audio plugin" "\n\n"
"Version: " "1.0" "\n"
"by Project64 Legacy team" "\n"
"Build date: " __DATE__ " " __TIME__ "\n\n";

EXPORT void CALL
DllAbout( HWND hParent )
{
	msg_about(DLL_about);
	hParent = NULL;
	if (hParent == NULL)
		return; /* -Wunused-but-set-parameter */
	return;
}

EXPORT void CALL
DllConfig ( HWND hParent )
{
}

EXPORT void CALL
DllTest ( HWND hParent )
{
}

EXPORT void CALL
GetDllInfo( PLUGIN_INFO * PluginInfo )
{
	PluginInfo->Version = 0x0101;
	PluginInfo->Type    = PLUGIN_TYPE_AUDIO;
	sprintf_s(PluginInfo->Name,100,"No Audio plugin");
	PluginInfo->NormalMemory  = TRUE;
	PluginInfo->MemoryBswaped = TRUE;
}

EXPORT void CALL ProcessAList(void)
{
	int x = 0;
	return;
}

EXPORT void CALL RomOpen()
{
	return;
}

EXPORT void CALL RomClosed( void )
{
}

EXPORT BOOL CALL
InitiateAudio(AUDIO_INFO Audio_Info)
{
	AudioInfo = Audio_Info;
	return TRUE;
}

void msg_about(const char* err, ...)
{
	va_list arg;
	va_start(arg, err);
	char buf[MSG_BUFFER_LEN];
	vsprintf_s(buf, sizeof(buf), err, arg);
	MessageBoxA(0, buf, "About", MB_ICONINFORMATION | MB_OK | MB_TASKMODAL);
	va_end(arg);
}
