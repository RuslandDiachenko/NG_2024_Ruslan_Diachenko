#include <iostream>
#include <math.h>

using namespace std;

int main() {

    int operation = 0;
    double a = 0, b = 0, c = 0;

    // Info and get operation.
    cout << "Calculator 2.0" << endl;
    cout << "Info"   << endl
         << "0. Sum "           << endl
         << "1. Subtraction"    << endl
         << "2. Multiplication" << endl
         << "3. Division"       << endl
         << "4. Square"         << endl
         << "5. Root"           << endl
         << "Your operation: ";
    cin >> operation;

    switch (operation) {
    case 0:
    case 1:
    case 2:
    case 3:
        cout << "Enter first number: ";
        cin >> a;
        cout << "Enter second number: ";
        cin >> b;
        switch (operation) {
        case 0:
            c = a + b;
            break;
        case 1:
            c = a - b;
            break;
        case 2:
            c = a * b;
            break;
        case 3:
            if (b == 0) {
                cout << "Error. Division by zero." << endl;
                return 1;
            }
            c = a / b;
            break;
        }
        break;

    case 4:
    case 5:
        cout << "Enter number: ";
        cin >> a;
        switch (operation) {
            case 4:
                c = a * a;
                break;
            case 5:
                c = sqrt(a);
                break;
                // Alternative without libs:
                // if (a < 0) {
                //     cout << "Error. Root of negative number." << endl;
                //     return 1;
                // }
                // for (int num = 0; num < a; num += 1) {
                //     if (num * num >= a) {
                //         c = sqrt(num);
                //         break;
                //     }
                // }
                // break;
        }
        break;

    default:
        cout << "\nError: Unknow operation." << endl;
        return 1;
    }

    cout << "\nResult: " <<  c << endl;

    return 0;
}
