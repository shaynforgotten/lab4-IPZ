#include <iostream>
#include <iomanip>
#include <cmath> 

using namespace std;
double calculateU(double x) {
    if (x >= 0 && x <= 2.2) {
        return x - 0.8 * sin(x);
    }
    else if (x > 2.2 && x <= 3) {
        return atan(log(x) + 0.3);
    }
    else {
        return NAN; 
    }
}

double logBase3(double value) {
    return log(value) / log(3); 
}

int main() 
{
    // TASK 4.1 
    cout << fixed << setprecision(5);

    double x_start = 0.0, x_end = 3.0, step = 0.4;

   
    cout << "x\t\tu(x)\n";
    cout << "-----------------\n";

    for (double x = x_start; x <= x_end; x += step) {
        double u; 

    
        if (x <= 2.2) {
            u = x - 0.8 * sin(x);
        }
        else {
            u = atan(log(x) + 0.3); 
        }

        
        cout << x << "\t\t" << u << "\n";
    }

    
    // TASK 4.2
    double x_start = 0.0, x_end = 0.0, dx;
    cout << "Enter start value of x: ";
    cin >> x_start;
    cout << "Enter end value of x: ";
    cin >> x_end;
    cout << "Enter step dx: ";
    cin >> dx;

    if (x_start >= x_end || dx <= 0) {
        cout << "Invalid data! Please check the boundaries and step size" << endl;
        return 1;
    }

    cout << setw(10) << "x" << setw(20) << "u(x)" << endl;
    cout << string(30, '-') << endl;

    for (double x = x_start; x <= x_end; x += dx) {
        double u = calculateU(x);
        if (!isnan(u)) {
            cout << setw(10) << x << setw(20) << u << endl;
        }
        else {
            cout << setw(10) << x << setw(20) << "n/a" << endl; 
        }
    }

    // TASK 4.3 

    double phi_start = -4, phi_end = 4, delta_phi = 1.5;
    double r_start = 0, r_end = 6.5, delta_r = 1.1;

    cout << left << setw(10) << "r"
         << left << setw(10) << "phi"
         << left << setw(15) << "z" << endl;
    cout << string(35, '-') << endl;

    for (double phi = phi_start; phi <= phi_end; phi += delta_phi) {
        for (double r = r_start; r <= r_end; r += delta_r) {
            double expression = r * r - 6.57 - phi;

            if (fabs(expression) > 0) {
                double z = logBase3(fabs(expression));
                cout << left << setw(10) << fixed << setprecision(2) << r
                    << left << setw(10) << phi
                    << left << setw(15) << z << endl;
            }
            else {
                cout << left << setw(10) << fixed << setprecision(2) << r
                    << left << setw(10) << phi
                    << left << setw(15) << "undefined" << endl;
            }
        }
    }
}
