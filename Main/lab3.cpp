#include "../Func/func.h"

bool isPrime(int number)
{
    if (number <= 1) 
    {
        return false;
    }

    for (int i = 2; i <= number / 2; ++i) 
    {
        if (number % i == 0) 
        {
            return false;
        }
    }
    return true;
}

int main() 
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int num;
    cout << "������ �����: ";
    cin >> num;
    if (isPrime(num)) 
    {
        cout << num << " � ������� ������.\n";
    }
    else 
    {
        cout << num << " �� � ������� ������.\n";
    }
    return 0;
}