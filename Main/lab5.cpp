#include "../Func/func.h"

int findMax(int a, int b) 
{
    if (a > b) 
    {
        return a;
    }
    else 
    {
        return b;
    }
}

int main() 
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int num1, num2;
    cout << "Введіть перше число: ";
    cin >> num1;
    cout << "Введіть друге число: ";
    cin >> num2;
    int maxNumber = findMax(num1, num2);
    cout << "Найбільше число: " << maxNumber << endl;
    return 0;
}