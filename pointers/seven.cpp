#include <iostream>
#include <memory>  // For smart pointers
using namespace std;

// A class to demonstrate constructor/destructor behavior with smart pointers
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
    // Example with unique_ptr managing a primitive type
    unique_ptr<int> unptr1 = make_unique<int>(25);

    // Print the value pointed to by the unique_ptr
    cout << *unptr1 << endl;

    // Transfer ownership to another unique_ptr using std::move
    unique_ptr<int> unptr2 = move(unptr1);

   

    return 0;
}
