#pragma once

#include <iostream>

using namespace std;

class Graphics
{
public:
	static string SelectionArrow() { return "-> "; }
	static string SelectionSpace() { return "   "; }
	static void PrintTitle();
};

