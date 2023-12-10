#include "../Func/func.h"

bool isPerfectNumber(int num) 
{
    int sum = 1; 
    for (int i = 2; i * i <= num; ++i) 
    {
        if (num % i == 0) 
        {
            sum += i;
            if (i != num / i) 
            {
                sum += num / i;
            }
        }
    }
    return sum == num;
}

void findPerfectNumbers(int start, int end) 
{
    cout << "�������� ����� � �������� �� " << start << " �� " << end << ":\n";
    for (int num = start; num <= end; ++num) 
    {
        if (isPerfectNumber(num)) 
        {
            cout << num << " ";
        }
    }
    cout << endl;
}

int main() 
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int start, end;
    cout << "������ ��������� �������� ���������: ";
    cin >> start;
    cout << "������ ������ �������� ���������: ";
    cin >> end;
    findPerfectNumbers(start, end);
    return 0;
}