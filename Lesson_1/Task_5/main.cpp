#include <iostream>

using namespace std;

int main() {
    // Init
    int height;

    cout << "Enter the height of the Christmas tree: ";
    cin >> height;

    for ( int row = 0; row < height; row++)
    {
        for ( int col = 0; col < height; col++)
        {
            if (col >= height-1-row)
            {
                cout << "*";
                if (height-1-row-col) cout << "*";
            }
            else cout << " ";
        }
        cout << endl;
    }
    for (int i = 0; i != height; i++) {
        if (i == height - 1) cout << "*" << endl;
        else cout << " ";
    }
    return 0;
}
