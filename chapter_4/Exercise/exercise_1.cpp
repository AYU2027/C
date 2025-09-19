#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

double med(vector<int> v) {
    sort(v.begin(), v.end());
    int n = v.size();

    if (n % 2 == 0) {
        // even size -> average of two middle values
        return (v[n/2] + v[n/2 - 1]) / 2.0;
    } else {
        // odd size -> middle value
        return v[n/2];
    }
}

int main() {
    vector<int> v = {5, 7, 9, 4, 6, 8};
    cout << med(v) << endl;
    return 0;
}
