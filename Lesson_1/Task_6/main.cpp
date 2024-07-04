#include <iostream>

using namespace std;

int main() {
    // Size of YOLKA.
    int size;
    cin >> size;

    // Modifier for back postion.
    int mod = 1;

    // Draw '*' on coordinates by x, y. mod + 1 for back side. mod*2 - 1 for draw continue.
    for (int x = 0; x < size; x++) {
        for (int y = 0; y < size; y++) {
            if (y == size - mod) {
                for (int l = 0; l < mod*2 - 1; l++) {
                    cout << "*";
                }
                mod++;
            }
            else {
                cout << " ";
            }
        }
        cout << endl;
    }

    // Stovbur on latest position by y.
    for (int x = 0; x < 1; x++) {
        for (int y = 0; y < size; y++) {
            if (y  == size - 1) {
                cout << "*";
            }
            else {
                cout << " ";
            }
        }
        cout << endl;
    }
}
