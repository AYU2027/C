#include <iostream>
using namespace std;

int main() {
    int a;
    char unit;

    cout << "Enter a number: ";
    cin >> a;

    cout << "Enter a character (i or j): ";
    cin >> unit;

    switch (unit) {
        case 'i':   // single quotes for char
            cout << a + 1 << endl;
            break;

        case 'j':
            cout << a + 4 << endl;
            break;

        default:
            cout << "Invalid input" << endl;
            break;
    }

    return 0;
}
