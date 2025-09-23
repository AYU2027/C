#include <iostream>
using namespace std;

void head(int n){
    if(n != 0){
        head(n - 1);
    }
    cout << n << " ";
}

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;

    head(n);

    return 0;
}
