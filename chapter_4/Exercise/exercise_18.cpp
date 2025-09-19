#include<iostream>
#include <cmath>
using namespace std;

double square(double x) {
    return x * x;
}

double quart(double a, double b, double c) {
    double alpha = (-b + sqrt(square(b) - 4 * a * c)) / (2 * a);
    double beta  = (-b - sqrt(square(b) - 4 * a * c)) / (2 * a);

    cout << "Roots: " << alpha << " and " << beta << endl;
    return 0;  // still returns double, but we only print roots
}

int main() {
    // x² - 5x + 6
    quart(1, -5, 6);

    return 0;
}
