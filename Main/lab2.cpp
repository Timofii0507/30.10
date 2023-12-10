#include "../Func/func.h"

unsigned long long factorial(int n) 
{
    if (n == 0 || n == 1) {
        return 1;
    }
    else {
        return n * factorial(n - 1);
    }
}

int main() 
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int num;
    cout << "Введіть число для обчислення факторіалу: ";
    cin >> num;
    if (num < 0) {
        cout << "Факторіал визначений тільки для не від'ємних цілих чисел." << endl;
    }
    else {
        unsigned long long result = factorial(num);
        cout << "Факторіал " << num << " = " << result << endl;
    }
    return 0;
}