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
    cout << "������ ����� �����: ";
    cin >> num1;
    cout << "������ ����� �����: ";
    cin >> num2;
    int maxNumber = findMax(num1, num2);
    cout << "�������� �����: " << maxNumber << endl;
    return 0;
}