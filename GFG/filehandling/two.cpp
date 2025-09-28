#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
     ifstream file("./GFG.txt"); // Reading the frm the existing the file 
     // oprning the fiel prebuilt file
     string s ;
     file>> s;// one word
     // or line
     string r;
     getline(file,r);
     cout <<"Read String "<<s;
     cout<<"Read the line"<<r;

       // Close the file
    file.close();
     return 0 ;
}