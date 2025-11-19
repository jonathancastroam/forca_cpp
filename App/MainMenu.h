#pragma once

#include <iostream>
#include <map>

using namespace std;

class MainMenu
{
private:
	enum Options {
		START,
		SETTINGS,
		EXIT
	};

	static void PrintMainMenu();
	static void PrintCategoryMenu();

public:
	static map<int, Options> MapOptions() {
		map<int, Options> mapCat = { {1, START}, {2, SETTINGS}, {3, EXIT} };
		return mapCat;
	};

	static string OptionsToString(Options option);
	static void ShowStartMenu();
	static void HandleMainMenuNavigation();
	static void ShowCategoriesMenu();
	static void HandleCategoriesNavigation();
};

