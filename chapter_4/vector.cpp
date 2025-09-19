#include <iostream>
#include<vector>
using namespace std;
int main(){

   vector<int> v = {5, 7, 9, 4, 6, 8};
   v.push_back(6);
    for (int i=0; i<v.size(); ++i)
 cout << v[i] << endl;  

}