#include <windows.h>


LPCTSTR Caption = L"Application Programming Interface";
LPCTSTR Caption2 = L"Yes maam";


int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance,
	LPSTR lpCmdLine, int nCmdShow)
{
	//MessageBox(NULL, "Goodbye, cruel world!", "Note", MB_OK);
	MessageBox(NULL, L"It happened earlier\nDidn't it?", Caption2, NULL);
	/*MessageBox(NULL,
		L"Welcome to Win32 Application Development\n"
		L"You will learn about functions, classes, "
		L"communication, and other cool stuff\n"
		L"Are you ready to rumble!!!!!!!!!!!!!!",
		Caption,
		MB_YESNOCANCEL | MB_ICONQUESTION);*/

	return 0;
}