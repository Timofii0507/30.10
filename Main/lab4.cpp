#include "../Func/func.h"

int cube(int number) {
    return number * number * number;
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int num;
    cout << "������ �����: ";
    cin >> num;
    int result = cube(num);
    cout << "��� ����� " << num << " ������� " << result << endl;
    return 0;
}