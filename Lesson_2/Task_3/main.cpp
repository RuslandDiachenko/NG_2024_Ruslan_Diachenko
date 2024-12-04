#include <iostream>

using namespace std;

int main()
{
    // Init
    int numbers[20];
    int lastIndex{20};
    // Get numbers
    for (int number{0}; number != 20; number++)
    {
        cout << "Enter " << number+1 << " value: ";
        cin >> numbers[number];

        lastIndex = number;
        if (numbers[number] == 0) break;
    }

    // Draw result
    cout << "Your result figure: " << endl;
    for (int row{0}; row < lastIndex; row++)
    {
        while (numbers[row] != 0)
        {
            cout << "*";
            numbers[row] -= 1;
        }
        cout << endl;
    }
}
