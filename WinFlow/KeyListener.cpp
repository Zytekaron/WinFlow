#include <iostream>
#include <windows.h>
#include <winuser.h>
#include <fstream>

using std::cout;
using std::ofstream;
using std::ios;

LRESULT CALLBACK KeyboardProc(
	_In_ int    code,
	_In_ WPARAM wParam,
	_In_ LPARAM lParam
) {
	return TRUE;
}