#include "../Func/func.h"

double power(double base, int exponent) 
{
    if (exponent < 0) 
    {
        return 1.0 / power(base, -exponent);
    }
    if (exponent == 0) 
    {
        return 1.0;
    }
    return base * power(base, exponent - 1);
}

int main() 
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    double base;
    int exponent;
    cout << "������ ������ �������: ";
    cin >> base;
    cout << "������ �������� �������: ";
    cin >> exponent;
    double result = power(base, exponent);
    cout << base << " � ������ " << exponent << " ������� " << result << endl;
    return 0;
}
