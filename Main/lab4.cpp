#include "../Func/func.h"

int cube(int number) {
    return number * number * number;
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int num;
    cout << "¬вед≥ть число: ";
    cin >> num;
    int result = cube(num);
    cout << " уб числа " << num << " дор≥внюЇ " << result << endl;
    return 0;
}