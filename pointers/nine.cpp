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
   shared_ptr<Myclass>shPtr1 = make_shared<Myclass>();
   cout<< "Shared Count:"<<shPtr1.use_count()<<endl;

   {//new scope in default Scope
       shared_ptr<Myclass>shrPtr2 = shPtr1;
   cout << "shared Cout:"<<shPtr1.use_count()<<endl;
   }
   cout<<"shared Cout:"<<shPtr1.use_count()<<endl;




    return 0;
}
