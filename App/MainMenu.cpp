#include "MainMenu.h"
#include "Graphics.h"
#include "../Data/Words.h"

#include <map>

using namespace std;

int currentOption = 1;

/// <summary>
/// Print options to main menu
/// </summary>
void MainMenu::PrintCategoryOptions() {
	
	cout << "Selecione uma categoria:" << endl;

	for (auto& options : Words::MapCategories()) {
		cout << (options.first == currentOption ? Graphics::SelectionArrow() : Graphics::SelectionSpace()) << Words::CategoryToString(options.second) << endl;
	}
}

/// <summary>
/// First menu execution on app
/// </summary>
void MainMenu::ShowStartMenu() {
	Graphics::PrintTitle();

	PrintCategoryOptions();
}