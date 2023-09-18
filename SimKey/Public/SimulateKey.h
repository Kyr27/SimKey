#pragma once
#define WIN32_LEAN_AND_MEAN
#include <Windows.h>

namespace SimKey
{
	void SendKey(WCHAR key);
	void SendKeyDX(WCHAR key);
}