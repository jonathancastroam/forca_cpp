#include "Words.h"
#include <random>

using namespace std;

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