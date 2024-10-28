#include <iostream>

using namespace std;

int main() {
    // Init
    double minSalary{1000}, maxSalary{1000000};
    double userSalary{0};
    int userAdvice{0};

    // Main
    // NOT USE -> else, ==, <=, >=, &&, ||
    cout << "Enter Your Salary: ";
    cin >> userSalary;

    !(userSalary - minSalary) ? userAdvice = 1 :
    !(userSalary - maxSalary) ? userAdvice = 2 : userAdvice = 0;

    switch (userAdvice) {
    case 0: cout << "Work More!"; break;
    case 1: cout << "Great Work!"; break;
    case 2: cout << "Wow! You're Millionaire!"; break;
    default: cout << "Unknown Error." << endl;
    }

    return 0;
}
