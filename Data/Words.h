#pragma once
#include <string>

using namespace std;

class Words
{
private:
    enum Categories {
        ANIMAIS,
        FRUTAS,
        OBJETOS,
        PAISES
    };

    static const string animais[12];
    static const string frutas[12];
    static const string objetos[12];
    static const string paises[12];

public:
    static const string GetRandomWord(Categories category);
    
    static const string GetAnimal(int index) { return animais[index]; }
    static const string GetFruit(int index) { return frutas[index]; }
    static const string GetObject(int index) { return objetos[index]; }
    static const string GetCountry(int index) { return paises[index]; }
};

