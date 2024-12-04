#include <iostream>

using namespace std;

int main() {
    // Init
    int minSalary{1000}, maxSalary{1000000};
    int userSalary{0};

    // Main
    // NOT USE -> else, ==, <=, >=, &&, ||
    cout << "Enter Your Salary: ";
    cin >> userSalary;

    if (userSalary < minSalary) cout << "Work More!" << endl;
    if (userSalary > minSalary - 1)
    {
        if (userSalary < maxSalary - 1) cout << "You're Good!" << endl;
        if (userSalary > maxSalary - 1) cout << "Wow, You're millionaire!" << endl;
    }
    return 0;
}
