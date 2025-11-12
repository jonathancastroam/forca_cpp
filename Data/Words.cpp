#include "Words.h"
#include <ctime>

using namespace std;

string animais[12] = {
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

string frutas[12] = {
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

string objetos[12] = {
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

string paises[12] = {
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

const string Words::GetRandomWord(Categories category) {
    // Inicializa o gerador de números aleatórios
    srand(time(0));

    int randomIndex = rand() % 12;

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