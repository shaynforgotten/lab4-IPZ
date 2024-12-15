#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;


double calculateFunction(double x) {
    return acos(x) / (2 * x + 1);
}

double firstFunction(double x) {
    return x - 0.8 * sin(x);
}

double secondFunction(double x) {
    return atan(log(x) + 0.3);
}

int main() {
 
// 4.1 ✔️
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

  // 4.2 
    double x, u;
    double step = 0.4;

    cout << "---------------------------------" << endl;
    cout << "|   x    |       u(x)            |" << endl;
    cout << "---------------------------------" << endl;

    for (x = 0; x <= 2.2; x += step) {
        u = firstFunction(x);
        cout << fixed << setprecision(4);
        cout << "| " << setw(6) << x << " | " << setw(19) << u << " |" << endl;
    }

    for (x = 2.2; x <= 3; x += step) {
        u = secondFunction(x);
        cout << fixed << setprecision(4);
        cout << "| " << setw(6) << x << " | " << setw(19) << u << " |" << endl;
    }

    cout << "---------------------------------" << endl;

   // 4.3
         double start_phi = -4, end_phi = 4, delta_phi = 1.5;
    double start_r = 0, end_r = 6.5, delta_r = 1.1;

    cout << setw(8) << "r" << setw(10) << "phi" << setw(15) << "z" << endl;
    cout << "--------------------------------------" << endl;

    
    for (double phi = start_phi; phi <= end_phi; phi += delta_phi) {
        
        for (double r = start_r; r <= end_r; r += delta_r) {
            double argument = r * r - 6.57 - phi; 
            double z = 0;

            
            if (fabs(argument) > 0) {
                z = log(fabs(argument)) / log(3); 
                cout << fixed << setprecision(2) 
                     << setw(8) << r 
                     << setw(10) << phi 
                     << setw(15) << z << endl;
            } else {
                cout << fixed << setprecision(2)
                     << setw(8) << r
                     << setw(10) << phi
                     << setw(15) << "NaN" << endl; 
            }
        }
    }    
}
