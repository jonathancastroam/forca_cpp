#pragma once

#include <string>

class Graphics
{
public:
	static std::string SelectionArrow() { return "-> "; }
	static std::string SelectionSpace() { return "   "; }

	static void ClearConsole();
	static void PrintTitle();
};

