#include "Words.h"
#include <random>

using namespace std;

static std::array<string, 12> animals = { "CACHORRO", "GATO", "ELEFANTE", "LEAO", "TIGRE", "ZEBRA", "GIRAFA", "MACACO", "PANDA", "COELHO", "RINOCERONTE", "TUBARAO" };
static std::array<string, 12> fruits = { "BANANA", "MACA", "LARANJA", "MORANGO", "ABACAXI", "UVA", "PERA", "MELANCIA", "MAMAO", "KIWI", "CEREJA", "MANGA" };
static std::array<string, 12> objects = { "CADEIRA", "MESA", "COMPUTADOR", "TELEFONE", "CANETA", "LIVRO", "TESOURA", "COPO", "GARFO", "CHAVE", "MOCHILA", "LAMPADA" };
static std::array<string, 12> paises = { "BRASIL", "CANADA", "ESPANHA", "PORTUGAL", "JAPAO", "ITALIA", "MEXICO", "ALEMANHA", "CHINA", "INDIA", "EGITO", "ISRAEL" };


string Words::CategoryToString(Categories category)
{
    switch (category) {
    case ANIMALS:
        return "Animais";
    case FRUITS:
        return "Frutas";
    case OBJECTS:
        return "Objetos";
    case COUNTRIES:
        return "Paises";
    default:
        return "ERRO";
    }
}


string Words::GetAnimal(int index) { return animals[index]; }
string Words::GetFruit(int index) { return fruits[index]; }
string Words::GetObject(int index) { return objects[index]; }
string Words::GetCountry(int index) { return paises[index]; }

string Words::GetRandomWord(Categories category) {

    static mt19937 rng(random_device{}());
    static uniform_int_distribution<int> getRandom(1, 12);
    int randomIndex = getRandom(rng);
    
    switch (category) {
    case ANIMALS:
        return GetAnimal(randomIndex);
    case FRUITS:
        return GetFruit(randomIndex);
    case OBJECTS:
        return GetObject(randomIndex);
    case COUNTRIES:
        return GetCountry(randomIndex);
    default:
        return "ERRO";
    }
}