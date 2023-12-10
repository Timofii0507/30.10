#include "../Func/func.h"

int sumInRange(int a, int b) 
{
    if (a > b) {
        cout << "Неправильний діапазон. Перше число повинно бути менше або рівне другому числу." << std::endl;
        return 0; 
    }
    int sum = 0;
    for (int i = a; i <= b; ++i) {
        sum += i;
    }
    return sum;
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
    int result = sumInRange(num1, num2);
    if (result != 0)
    {
        cout << "Сума чисел у діапазоні між " << num1 << " і " << num2 << " дорівнює " << result << std::endl;
    }
    return 0;
}