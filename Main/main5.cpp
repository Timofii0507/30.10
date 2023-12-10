#include "../Func/func.h"

bool isHappyNumber(int number) 
{
    if (number < 100000 || number > 999999) 
    {
        cout << "Введене число не є шестизначним.\n";
        return false;
    }
    int digit1 = number / 100000 % 10;
    int digit2 = number / 10000 % 10;
    int digit3 = number / 1000 % 10;
    int digit4 = number / 100 % 10;
    int digit5 = number / 10 % 10;
    int digit6 = number % 10;
    return (digit1 + digit2 + digit3) == (digit4 + digit5 + digit6);
}

int main() 
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int inputNumber;
    cout << "Введіть шестизначне число: ";
    cin >> inputNumber;
    if (isHappyNumber(inputNumber)) 
    {
        cout << inputNumber << " є щасливим числом!\n";
    }
    else 
    {
        cout << inputNumber << " не є щасливим числом.\n";
    }
    return 0;
}