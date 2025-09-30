#include <iostream>
#include <list>
using namespace std;
// class  is user define datatype
class Myclass{
	public:// by default it private 
	
	
	string Name;
	string company;
	int no;
	list<string> titles;

};
int main(){
	
	Myclass user_one;
	user_one.Name = "ayush Sinha";
	user_one.company="The One";
	user_one.no = 5;
	user_one.titles = {"c++ for beginner","HTML","CSS3"};
	
	cout<<" Name "<<user_one.Name << endl;
	for (string vid : user_one.titles){
		cout<< vid << endl;
	}
	
	
}









