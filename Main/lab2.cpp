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
    cout << "������ ����� ��� ���������� ���������: ";
    cin >> num;
    if (num < 0) {
        cout << "�������� ���������� ����� ��� �� ��'����� ����� �����." << endl;
    }
    else {
        unsigned long long result = factorial(num);
        cout << "�������� " << num << " = " << result << endl;
    }
    return 0;
}