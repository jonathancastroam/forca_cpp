#include "Data\Words.h"
#include <iostream>

using namespace std;

int main() {
    cout << R"(
     ______   ___    _____     ____    ___ 
    |  ____| / _ \  |  __ \   / ___|  / _ \
    | |__   | | | | | |__) | | |     | |_| |
    |  __|  | | | | |  _  /  | |     |  _  |
    | |     | |_| | | | \ \  | |___  | | | |
    |_|      \___/  |_|  \_\  \____| |_| |_|

    )" << endl;

    Words words;

    // Exemplo de palavra
    cout << words.GetRandomWord(Words::Categories::ANIMAIS);

    return 0;
}