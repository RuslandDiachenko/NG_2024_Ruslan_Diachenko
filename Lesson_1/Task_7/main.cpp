#include <iostream>
#include <math.h>

using namespace std;

int main() {

    // Artifact position.
    double X = 0.0, Y = 0.0;
    double distance_to_artifact;

    // Field radius.
    double N = 0.0;
    cout << "Enter radius of field: ";
    cin >> N;
    cout << endl;
    // Konstantin postion.
    double x = 0.0, y = 0.0;
    cout << "Enter Konstantin coordiantes (x, y): ";
    cin >> x, y;
    cout << endl;

    // Calculate distance.
    distance_to_artifact = sqrt(pow((X - x), 2) + pow((Y - y), 2) );

    // Check if Konstantin on field.
    if (distance_to_artifact > N){
        cout << "Incorrect coordinates.\nKonstantin out circle. False Distance: " << distance_to_artifact << endl;
        return 1;
    } else {
        cout <<"Distance to artifact: " << distance_to_artifact;
    }

    return 0;
}
