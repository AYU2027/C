#include <iostream>
using namespace std ;

int getnumber(){
    return 35;

}

int add(int a,int b){
    return a+b;
}

int main(){
    cout<<getnumber; // it will return the address of the function 

    int(*funcPtr)(int,int) = add;
    cout << funcPtr();


}