#include <iostream>

using namespace std;

int main()
{
    int numbers[5];
    for (int number{0}; number != 5; number++)
    {
        cout << "Enter " << number+1 << " value: ";
        cin >> numbers[number];
    }

    for (int x{0};x < 5;x++)
    {
        for (int y{0}; y < 5;y++)
        {
            if (numbers[y] - 1 >= 0)
            {
                cout << "*";
                numbers[y] -= 1;
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
