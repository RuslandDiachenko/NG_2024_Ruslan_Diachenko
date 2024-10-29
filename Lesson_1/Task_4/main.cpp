#include <iostream>

using namespace std;

int main() {
    // Init
    double minSalary{1000}, maxSalary{1000000};
    double userSalary{0};

    // Main
    // NOT USE -> else, ==, <=, >=, &&, ||
    cout << "Enter Your Salary: ";
    cin >> userSalary;

    cout << ( userSalary < maxSalary ? (userSalary < minSalary ? "Work More!" : "You're Good!") : "Wow, You're millionaire!" ) << endl;
    return 0;
}
