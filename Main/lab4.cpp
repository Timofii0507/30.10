#include "../Func/func.h"

int cube(int number) 
{
    return number * number * number;
}

int main() 
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int num;
    cout << "Ââåä³òü ÷èñëî: ";
    cin >> num;
    int result = cube(num);
    cout << "Êóá ÷èñëà " << num << " äîð³âíþº " << result << endl;
    return 0;
}
