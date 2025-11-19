#pragma once
#include <array>
#include <string>
#include <map>

using namespace std;

class Words
{
private:

    enum Categories {
        ANIMALS,
        FRUITS,
        OBJECTS,
        COUNTRIES
    };
   
public:

    static std::map<int, Categories> MapCategories() {
        std::map<int, Categories> mapCat = { {1, ANIMALS}, {2, FRUITS}, {3, OBJECTS}, {4, COUNTRIES} };
        return mapCat;
    };

    static string CategoryToString(Categories category);
    static string GetAnimal(int index);
    static string GetFruit(int index);
    static string GetObject(int index);
    static string GetCountry(int index);
    static string GetRandomWord(Categories category);
};

