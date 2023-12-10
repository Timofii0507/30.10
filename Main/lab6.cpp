#include "../Func/func.h"

bool isPositive(int value) 
{
    return value > 0;
}

int main() 
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int number;
    cout << "Введіть число: ";
    cin >> number;
    if (isPositive(number)) 
    {
        cout << "Число є додатнім." << endl;
    }
    else 
    {
        cout << "Число є від'ємним або нулем." << endl;
    }
    return 0;
}