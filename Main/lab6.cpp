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
    cout << "������ �����: ";
    cin >> number;
    if (isPositive(number)) 
    {
        cout << "����� � �������." << endl;
    }
    else 
    {
        cout << "����� � ��'����� ��� �����." << endl;
    }
    return 0;
}