#include <iostream>
using namespace std;

int square(int x){
    return (x*x);

}

 int main()
 {
         int i = 0;           // start from 0
         while (i<100) {
                   cout << i << '\t' << square(i) << '\n';
                   ++i;        // increment i (that is, i becomes i+1)
         }
 }