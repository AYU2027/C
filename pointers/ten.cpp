#include <iostream>
#include <memory>  // For smart pointers
using namespace std;

// weak pointer vs shared pointer  
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

    weak_ptr<int> wePtr1;
    {

        shared_ptr<int>shPtr1 = make_shared<int>(25);
        wePtr1 = shPtr1;

    }
   
   



    return 0;
}
