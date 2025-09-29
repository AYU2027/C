#include <iostream>
#include <memory>  // For smart pointers
using namespace std;

// A class to demonstrate constructor/destructor behavior with smart pointers
//where it can allocate and dellocated auto matically
class Myclass {
public:
    Myclass() {
        cout << "Constructor invoked" << endl;
    }
    ~Myclass() {
        cout << "Destructor invoked" << endl;
    }
};  // <-- MISSING SEMICOLON was here

int main() {
   unique_ptr<Myclass>unPtr1 = make_unique<Myclass>();


    return 0;
}
