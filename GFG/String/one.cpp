#include <iostream>
#include <string>
using namespace std;

int main(){
    string str = "Hello geeks";

    for (int i = 0; i < str.size(); i++) {
        cout << str[i] ;
    }
    cout << endl;

    cout<<"accesing th string "<<str[5]<<endl;
    cout<<"length of the string"<<str.length()<<endl;

    string str1 = "bye";
    string result1 = str + str1;
    str1.append("bye");
    str1.push_back('!');
    string str2 = "hello github";
    string str3 = str2.substr(0,5);
    size_t pos = str.find("he");
    cout<<"str : "<<str<<endl;
    cout<<"str 1"<<str1<<endl;
    str.swap(str1);
    cout<<"str : "<<str<<endl;
    cout<<"str 1"<<str1<<endl;
}
