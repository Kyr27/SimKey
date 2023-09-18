#include "SimulateKey.h"

/* 
Example:

int main()
{
	while (!(GetAsyncKeyState(VK_END) & 1))
	{
		SimKey::SendKeyDX('d');
		SimKey::SendKey('t');

		Sleep(100);
	}


	return 0;
}
*/

// May or may not function properly with DirectInput applications, works fine for chat however
void SimKey::SendKey(WCHAR key)
{
	INPUT input{};
	input.type = INPUT_KEYBOARD;
	input.ki.wVk = VkKeyScanW(key);
	SendInput(1, &input, sizeof(input));

	Sleep(5);
	ZeroMemory(&input, sizeof(input));
	
	input.ki.dwFlags = KEYEVENTF_KEYUP;
	SendInput(1, &input, sizeof(input));
}

// Credits to King Gore from youtube comments for pointing out how to make SendInput work with DirectX applications. Highly recommended to use this one.
void SimKey::SendKeyDX(WCHAR key)
{
	key = VkKeyScanW(key);
	UINT mappedKey = MapVirtualKeyW(LOBYTE(key), NULL);
	INPUT input = { 0 };
	input.type = INPUT_KEYBOARD;
	input.ki.dwFlags = KEYEVENTF_SCANCODE;
	input.ki.wScan = mappedKey;
	SendInput(1, &input, sizeof(input));
	Sleep(50);
	input.ki.dwFlags = KEYEVENTF_SCANCODE | KEYEVENTF_KEYUP;
	SendInput(1, &input, sizeof(input));
}