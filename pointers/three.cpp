#include <iostream>
using namespace std;

int getmin(int numbers[] ,int size){
    int min = numbers[0];
    for(int i = 1;i<size;i++){
        if(numbers[i] < min)
           min = numbers[i];
    }
    return min;
}

int getmax(int numbers[],int size){
    int max = numbers[0];
    for (int i =1;i<=size;i++){
        if(numbers[i]>max)
           max = numbers[i];
    }
    return max;
}

void getMinAndMax(int numbers[], int size,int* min ,int* max){
    for(int i = 1;i <size;i++){
        if(numbers[i]>*max)
          *max = numbers[i];
        if(numbers[i]<*min)
          *min = numbers[i];
    }
    
}

int main(){
    int numbers[5] = {5,4,-2,29,6};
    // cout<<"Max is "<<getmax(numbers,5)<<endl;
    // cout<<"MIn is "<<getmin(numbers,5)<<endl;
    int min = numbers[0];
    int max = numbers[0];
    getMinAndMax(numbers,5,&min,&max);

}