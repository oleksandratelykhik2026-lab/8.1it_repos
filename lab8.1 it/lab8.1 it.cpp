#include <iostream>
using namespace std;

// Знаходить індекс третьої крапки в рядку
int FindThirdDot(const char str[])
{
    int count = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == '.')
        {
            count++;

            if (count == 3)
                return i;
        }
    }

    return -1;
}

// Замінює кожен четвертий символ на крапку
void ReplaceEveryFourthChar(char str[])
{
    for (int i = 3; str[i] != '\0'; i += 4)
    {
        str[i] = '.';
    }
}

int main()
{
    const int SIZE = 256;
    char str[SIZE];

    cout << "Enter a string: ";
    cin.getline(str, SIZE);

    // Знаходимо третю крапку до зміни рядка
    int index = FindThirdDot(str);

    if (index != -1)
    {
        cout << "Index of the third dot: " << index << endl;
        cout << "Position of the third dot: " << index + 1 << endl;
    }
    else
    {
        cout << "The string contains less than three dots." << endl;
    }

    // Замінюємо кожен четвертий символ
    ReplaceEveryFourthChar(str);

    cout << "Modified string: " << str << endl;

    return 0;
}