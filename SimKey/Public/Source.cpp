#include "pch.h"
#include "SimulateKey.h"

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