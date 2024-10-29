#include <iostream>

using namespace std;

int main() {
    int numbers[5];
    for (int number{0}; number != 5; number++)
    {
        cout << "Enter " << number+1 << " number: ";
        cin >> numbers[number];
    }

    cout << "You're entered: ";
    for (int number{0}; number != 5; number++)
    {
        cout << numbers[number] << " ";
    }
    cout << endl;

    return 0;
}
