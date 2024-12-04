#include <iostream>

using namespace std;

int main()
{
    // Init
    int numbers[5];

    // Get numbers
    for (int number{0}; number != 5; number++)
    {
        cout << "Enter " << number+1 << " value: ";
        cin >> numbers[number];
    }

    // Draw result
    for (int row{0};row < 5;row++)
    {
        for (int col{0}; col < 5;col++)
        {
            if (numbers[col] - 1 >= 0)
            {
                cout << "*";
                numbers[col] -= 1;
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
