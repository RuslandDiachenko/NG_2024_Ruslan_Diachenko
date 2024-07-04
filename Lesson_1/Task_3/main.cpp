#include <iostream>

using namespace std;

int main() {

    int salary;

    cout << "How much your salary?" << endl;
    cout << "Your salary: ";
    cin >> salary;

    if (salary < 1000) {
        cout << "Work harder." << endl;
    }

    if (salary < 1000000) {
        cout << "You are working well!" << endl;
    }

    if (salary > 999999) {
        cout << "Wow, you're a millionaire!" << endl;
    }

    cout << "However, you're well done!" << endl;

    return 0;
}
