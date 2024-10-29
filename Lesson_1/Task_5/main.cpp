#include <iostream>

using namespace std;

int main() {
    // Init
    int height;

    cout << "Enter the height of the Christmas tree: ";
    cin >> height;

    for ( int x = 0; x < height; x++)
    {
        for ( int y = 0; y < height; y++)
        {
            if (y >= height-1-x)
            {
                cout << "*";
                if (height-1-x-y) cout << "*";
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
