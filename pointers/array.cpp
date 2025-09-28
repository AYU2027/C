#include <iostream>
using namespace std;
int main(){

    int arr[5] ={2,3,5,7,9};
    //same
    cout<<arr<<endl;
    cout<<&arr[0]<<endl;


    cout<<&arr[1]<<endl;

    //same things
    cout<<&arr[2]<<endl;
    cout<<arr+2<<endl;

    //same things
    cout<<arr[2]<<endl;
    cout<<*(arr + 2)<<endl;



    int arr1[5];

    for(int i=0 ;i<=4;i++){
        cout << "Number :";
        cin>> arr1[i];
    }

    for (int i =0 ;i<=4;i++){
        cout<<*(arr1 + i)<<"  ";
    }



}