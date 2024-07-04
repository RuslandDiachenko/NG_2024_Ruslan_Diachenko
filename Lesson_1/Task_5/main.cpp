#include <iostream>
#include <math.h>

using namespace std;
int main() {

    double a, b, c, discriminant;
    double x1, x2;

    cin >> a;
    cin >> b;
    cin >> c;
    discriminant = (b * b) - (4 * a * c);
    cout << discriminant << endl;
    if (discriminant == 0) {
        x1 = -b / (2 * a);
        cout << "D = 0, result is x = " << x1 << endl;
    }

    if (discriminant > 0) {
        x1 = (-b + sqrt(discriminant)) / (2 * a);
        x2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << "D > 0, result is x1 = " << x1 <<", x2 = " << x2 << endl;
    }
    else {
        x1 = (-b + sqrt(-discriminant)) / (2 * a);
        x2 = (-b - sqrt(-discriminant)) / (2 * a);
        cout << "D < 0, result is x1 = " << x1 <<", x2 = " << x2 << endl;

    }

    return 0;
}
