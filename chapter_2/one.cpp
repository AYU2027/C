#include <iostream>
using namespace std;   // allows us to use cout, cin without std::

int main() {
    cout << "Please enter your name : "<<endl;
    string first_name;
    cin >> first_name;
    cout << "Hello, " << first_name << endl;
    return 0;
}
