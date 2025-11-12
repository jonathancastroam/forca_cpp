#pragma once
#include <string>

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

    string GetRandomWord(Categories category);
    
    string GetAnimal(int index) { return animais[index]; }
    string GetFruit(int index) { return frutas[index]; }
    string GetObject(int index) { return objetos[index]; }
    string GetCountry(int index) { return paises[index]; }
};

