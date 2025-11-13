#pragma once
#include <string>
#include <map>

using namespace std;

class Words
{
private:
    const string animais[12] = {
        "CACHORRO",
        "GATO",
        "ELEFANTE",
        "LEAO",
        "TIGRE",
        "ZEBRA",
        "GIRAFA",
        "MACACO",
        "PANDA",
        "COELHO",
        "RINOCERONTE",
        "TUBARAO"
    };

    const string frutas[12] = {
        "BANANA",
        "MACA",
        "LARANJA",
        "MORANGO",
        "ABACAXI",
        "UVA",
        "PERA",
        "MELANCIA",
        "MAMAO",
        "KIWI",
        "CEREJA",
        "MANGA"
    };

    const string objetos[12] = {
        "CADEIRA",
        "MESA",
        "COMPUTADOR",
        "TELEFONE",
        "CANETA",
        "LIVRO",
        "TESOURA",
        "COPO",
        "GARFO",
        "CHAVE",
        "MOCHILA",
        "LAMPADA"
    };

    const string paises[12] = {
        "BRASIL",
        "CANADA",
        "ESPANHA",
        "PORTUGAL",
        "JAPAO",
        "ITALIA",
        "MEXICO",
        "ALEMANHA",
        "CHINA",
        "INDIA",
        "EGITO",
        "ISRAEL"
    };

public:
    enum Categories {
        ANIMAIS,
        FRUTAS,
        OBJETOS,
        PAISES
    };

    static std::map<int, Categories> MapCategories() {
        std::map<int, Categories> mapCat = { {1, ANIMAIS}, {2, FRUTAS}, {3, OBJETOS}, {4, PAISES} };
        return mapCat;
    };

    static string CategoryToString(Categories category);

    string GetRandomWord(Categories category);
    
    string GetAnimal(int index) { return animais[index]; }
    string GetFruit(int index) { return frutas[index]; }
    string GetObject(int index) { return objetos[index]; }
    string GetCountry(int index) { return paises[index]; }
};

