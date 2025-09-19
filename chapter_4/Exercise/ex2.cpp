//  Read a sequence of double values into a vector. Think of each value as the distance between two cities along a given
//  route. Compute and print the total distance (the sum of all distances). Find and print the smallest and greatest distance
//  between two neighboring cities. Find and print the mean distance between two neighboring cities.

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<double> distances = {1, 2, 3, 4, 5};
    sort(distances.begin(), distances.end());
    double sum = 0;

    for (int i = 0; i < distances.size(); i++) {
        sum += distances[i];
    }

    cout << "Sum = " << sum << endl;
    cout << "Min = " << distances[0] << endl;
    cout << "Max = " << distances[distances.size() - 1] <<endl;
    cout << "Mean = " << sum / distances.size() << endl;

    return 0;
}
