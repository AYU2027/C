#include <iostream>
using namespace std;

int main(){
    int var = 10;
    int* ptr = &var;

    cout << var<<endl;
    cout << &var<<endl;
    cout<< ptr<<endl;
    cout<< *ptr<<endl;

    // 8 bytes for a 64-bit System -- size of the pointers
}