#include "../Func/func.h"
#include <cstdlib>
#include <ctime>

string generateRandomCard() 
{
    const char* suits[] = { "HEARTS", "DIAMONDS", "CLUBS", "SPADES" };
    const char* values[] = { "ACE", "TWO", "THREE", "FOUR", "FIVE", "SIX", "SEVEN", "EIGHT", "NINE", "TEN", "JACK", "QUEEN", "KING" };
    string randomSuit = suits[rand() % 4];
    string randomValue = values[rand() % 13];
    return randomValue + " " + randomSuit;
}

int main() 
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    srand(static_cast<unsigned int>(time(nullptr)));
    cout << "Випадкова гральна карта: " << generateRandomCard() << endl;
    return 0;
}