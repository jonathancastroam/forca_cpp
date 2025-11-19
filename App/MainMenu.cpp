#include "MainMenu.h"
#include "../Data/Graphics.h"
#include "../Data/Words.h"

#include <conio.h> // Necessário para _getch()
#include <cstdlib> // Necessário para system()
#include <map>

using namespace std;

int currentOption = 1;
int currentCategory = 1;
constexpr auto KEY_ENTER = 13;
constexpr auto KEY_ESC = 27;
constexpr auto ARROW_CODE1 = 0;
constexpr auto ARROW_CODE2 = 224;
constexpr auto KEY_UP = 72;
constexpr auto KEY_DOWN = 80;
constexpr auto KEY_LEFT = 75;
constexpr auto KEY_RIGHT = 77;

/// <summary>
/// 
/// </summary>
/// <param name="option"></param>
string MainMenu::OptionsToString(Options option)
{
    switch (option) {
    case START:
        return "Iniciar jogo";
    case SETTINGS:
        return "Configuracoes";
    case EXIT:
        return "Sair";
    default:
        return "error";
    }
}

/// <summary>
/// First menu execution on app
/// </summary>
void MainMenu::ShowStartMenu() {
    system("cls");

    Graphics::PrintTitle();

    PrintMainMenu();
    HandleMainMenuNavigation();
}

/// <summary>
/// First menu execution on app
/// </summary>
void MainMenu::ShowCategoriesMenu() {
    system("cls");

    Graphics::PrintTitle();

    PrintCategoryMenu();
    HandleCategoriesNavigation();
}

/// <summary>
/// Print options to main menu
/// </summary>
void MainMenu::PrintMainMenu() {

    cout << "Selecione uma categoria:" << endl;

    for (auto& options : MainMenu::MapOptions()) {
        cout << (options.first == currentOption ? Graphics::SelectionArrow() : Graphics::SelectionSpace()) << OptionsToString(options.second) << endl;
    }
}

/// <summary>
/// Print category options to menu
/// </summary>
void MainMenu::PrintCategoryMenu() {
	
	cout << "Selecione uma categoria:" << endl;

	for (auto& options : Words::MapCategories()) {
		cout << (options.first == currentCategory ? Graphics::SelectionArrow() : Graphics::SelectionSpace()) << Words::CategoryToString(options.second) << endl;
	}
}

/// <summary>
/// Watch the user input to select options
/// </summary>
void MainMenu::HandleMainMenuNavigation() {
    int ch;

    while (true) {
        ch = _getch();

        // Handle special keys action
        if (ch == ARROW_CODE1 || ch == ARROW_CODE2) {
            ch = _getch();
            
            switch (ch) {
            case KEY_UP:
                if (currentOption > 1) {
                    currentOption--;
                    ShowStartMenu();
                }
                break;
            case KEY_DOWN:
                if (currentOption < 3) {
                    currentOption++;
                    ShowStartMenu();
                }
                break;
            default:
                // std::cout << "Tecla especial (codigo: " << ch << ") pressionada.\n";
                continue;
            }
        }

        // Handle ENTER action
        if (ch == KEY_ENTER) {
            switch (currentOption) {
            case 1:
                ShowCategoriesMenu();
                break;
            case 2:
                cout << "Show options menu";
                ShowStartMenu();
                break;
            case 3:
                exit(EXIT_SUCCESS);
            default:
                continue;
            }
        }

        if (ch == KEY_ESC) {
            exit(EXIT_SUCCESS);
        }
    }

}

/// <summary>
/// Watch the user input to select options
/// </summary>
void MainMenu::HandleCategoriesNavigation() {
    int ch;

    while (true) {
        ch = _getch();

        // Handle special keys action
        if (ch == ARROW_CODE1 || ch == ARROW_CODE2) {
            ch = _getch();

            switch (ch) {
            case KEY_UP:
                if (currentCategory > 1) {
                    currentCategory--;
                    ShowCategoriesMenu();
                }
                break;
            case KEY_DOWN:
                if (currentCategory < 4) {
                    currentCategory++;
                    ShowCategoriesMenu();
                }
                break;
            default:
                // std::cout << "Tecla especial (codigo: " << ch << ") pressionada.\n";
                continue;
            }
        }

        // Handle ENTER action
        if (ch == KEY_ENTER) {

            auto categories = Words::MapCategories();
            
            cout << "Palavra escolhida: " << Words::GetRandomWord(categories[currentCategory]);
            
        }

        if (ch == KEY_ESC) {
            exit(EXIT_SUCCESS);
        }
    }

}

