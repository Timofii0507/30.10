#include "../Func/func.h"

int sumInRange(int a, int b) 
{
    if (a > b) {
        cout << "������������ �������. ����� ����� ������� ���� ����� ��� ���� ������� �����." << std::endl;
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
    cout << "������ ����� �����: ";
    cin >> num1;
    cout << "������ ����� �����: ";
    cin >> num2;
    int result = sumInRange(num1, num2);
    if (result != 0)
    {
        cout << "���� ����� � ������� �� " << num1 << " � " << num2 << " ������� " << result << std::endl;
    }
    return 0;
}