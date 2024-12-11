#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;


double calculateFunction(double x) {
    return acos(x) / (2 * x + 1);
}

int main() {
 
    double start, end, step;
    int n;


    start = 0.1;
    end = 0.9;
    step = 0.1;

    cout << "Table for Part (a):\n";
    cout << setw(10) << "x" << setw(20) << "y = arccos(x) / (2x + 1)" << endl;
    for (double x = start; x <= end; x += step) {
        double y = calculateFunction(x);
        cout << setw(10) << x << setw(20) << y << endl;
    }

    cout << "\n";


    start = 0.0;
    step = 0.2;
    n = 4;

    cout << "Table for Part (b):\n";
    cout << setw(10) << "x" << setw(20) << "y = arccos(x) / (2x + 1)" << endl;
    for (int i = 0; i < n; ++i) {
        double x = start + i * step;
        double y = calculateFunction(x);
        cout << setw(10) << x << setw(20) << y << endl;
    }

    return 0;
}
