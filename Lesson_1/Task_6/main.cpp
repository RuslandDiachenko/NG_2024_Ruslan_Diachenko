#include <iostream>
#include <windows.h>
#include <cmath>

using namespace std;

int main()
{
    int frame{0};           // Frame for animation.
    int triangle{0};        // Triangle size.

    cout << "Enter triangle size: ";
    cin >> triangle;

    system("cls");          // Clear console.

    do
    {
        switch (frame)
        {
            case 0:
                for (int row{0}; row < triangle; row++)
                {
                    for (int col{0}; col <= row ; col++)
                    {
                        cout << "#";
                    }
                    cout << endl;
                }
                break;

            case 1:
                for (int row{0}; row < triangle; row++)
                {
                    for (int col{0}; col < triangle - row ; col++)
                    {
                        cout << "#";
                    }
                    cout << endl;
                }
                break;
            case 2:
                for (int row{0}; row < triangle; row++)
                {
                    for (int col{0}; col < triangle; col++)
                    {
                        if (col < row)
                        {
                            cout << " ";
                        } else {
                            cout << "#";
                        }
                    }
                    cout << endl;
                }
                break;
            case 3:
                for (int row{0}; row < triangle; row++)
                {
                    for (int col{0}; col < triangle; col++)
                    {
                        if (col < triangle - row - 1)
                        {
                            cout << " ";
                        } else {
                            cout << "#";
                        }
                    }
                    cout << endl;
                }
                break;
        }

        // Select frame 0-3
        if (frame == 3){ frame = 0; }
        else frame += 1;

        Sleep(1000);    // Animation speed.
        system("cls");  // Clear Console
    } while(true);
    return 0;
}
