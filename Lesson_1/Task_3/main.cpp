#include <iostream>

using namespace std;

int main()
{
    // Init
    double firstNumber{0}, secondNumber{0}; // Variable for numbers.
    char mathOperation{' '};                // Variable for operation between numbers.

    // Main
    cout << "=== (NOT) Calculator ===" << endl;     // Title :)

    cout << "Enter First Number: ";         // Get First number.
    cin >> firstNumber;

    cout << "Enter Second Number: ";        // Get Second Number.
    cin >> secondNumber;

    cout << "Enter Math Operation: ";       // Get Math Operation.
    cin >> mathOperation;

    cout << "Result: ";
    switch (mathOperation)                  // Check Math Operation and choose equal, then write result such as number or error.
    {
    case '+': cout << firstNumber + secondNumber; break;
    case '-': cout << firstNumber - secondNumber; break;
    case '*': cout << firstNumber * secondNumber; break;
    case '/': if (secondNumber != 0) cout << firstNumber / secondNumber;
              else  cout << "Divide By Zero."; break;
    default:  cout << "Incorrect Math Operation.";
    }
    cout << endl;

    return 0;
}
