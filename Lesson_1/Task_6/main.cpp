#include <iostream>
#include <windows.h>
#include <cmath>

using namespace std;

int main()
{
    int frame{0};           // Frame for animation.
    int triangle{0};        // Triangle size.
    cout << "\033[?25l";    // Hide cursor.

    cout << "Enter triangle size: ";
    cin >> triangle;

    // Clear Console
    cout << "\033[H";
    cout << "\033[J";

    do
    {
        switch (frame)
        {
            case 0:
                for (int x{0}; x < triangle; x++)
                {
                    for (int y{0}; y <= x ; y++)
                    {
                        cout << "#";
                    }
                    cout << endl;
                }
                break;

            case 1:
                for (int x{0}; x < triangle; x++)
                {
                    for (int y{0}; y < triangle - x ; y++)
                    {
                        cout << "#";
                    }
                    cout << endl;
                }
                break;
            case 2:
                for (int x{0}; x < triangle; x++)
                {
                    for (int y{0}; y < triangle; y++)
                    {
                        if (y < x) {
                            cout << " ";
                        } else {
                            cout << "#";
                        }
                    }
                    cout << endl;
                }
                break;
            case 3:
                for (int x{0}; x < triangle; x++)
                {
                    for (int y{0}; y < triangle; y++)
                    {
                        if (y < triangle - x - 1) {
                            cout << " ";
                        } else {
                            cout << "#";
                        }
                    }
                    cout << endl;
                }
                break;
        }

        frame = frame == 3 ? 0 : frame + 1; // Select frame 0-3

        Sleep(1000);

        // Clear Console
        cout << "\033[H";
        cout << "\033[J";
    } while(true);
    return 0;
}
