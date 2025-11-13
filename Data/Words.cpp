#include "Words.h"
#include <random>

using namespace std;

string Words::CategoryToString(Categories category)
{
    switch (category) {
    case ANIMAIS:
        return "Animais";
    case FRUTAS:
        return "Frutas";
    case OBJETOS:
        return "Objetos";
    case PAISES:
        return "Países";
    default:
        return "ERRO";
    }
}

string Words::GetRandomWord(Categories category) {

    static mt19937 rng(random_device{}());
    static uniform_int_distribution<int> getRandom(1, 12);
    int randomIndex = getRandom(rng);
    
    switch (category) {
    case ANIMAIS:
        return GetAnimal(randomIndex);
    case FRUTAS:
        return GetFruit(randomIndex);
    case OBJETOS:
        return GetObject(randomIndex);
    case PAISES:
        return GetCountry(randomIndex);
    default:
        return "ERRO";
    }
}