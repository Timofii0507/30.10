#include "../Func/func.h"

void drawRectangle(int height, int width) 
{
    for (int i = 0; i < height; ++i) 
    {
        for (int j = 0; j < width; ++j) 
        {
            cout << "*"; // ����� ������� �� ����-���� ������ ��� ����������� ������������
        }
        cout << endl;
    }
}

int main() 
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int height, width;
    cout << "������ ������ N: ";
    cin >> height;
    cout << "������ ������ K: ";
    cin >> width;
    drawRectangle(height, width);
    return 0;
}