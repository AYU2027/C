#include <iostream>

void tail(int n){
    if(n == 0) return;
    std::cout<< n << " ";

    tail(n - 1);
}