#include <iostream>
using namespace std;

class student {
public:
    string Name;
    int No;

    student(string name, int no) {
        Name = name;
        No = no;
    }

    void GetInfo(){
        cout<< "Name : "<<Name<<endl;
        cout << "Number : "<< No <<endl;
    }
}; 

int main() {
    student s("one", 78);
   student s1("two",2);
   student s2("three",3);

   s.GetInfo();
}
