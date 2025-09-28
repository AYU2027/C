#include <iostream>
using namespace std ;
struct point
{
    private:
    int x,y;

    // consstructor 
    public:
    point(int a,int b)
    {
        x = a;
        y =b;
    }

    // function define uder the struct dtatatypes 
    int sum() {
        return x +y;
    }

        // Destructor
    ~Point()
    {
        cout << "Destroyed Point Variable" << endl;
    }
};

int main()
{
    struct point p = {0,1};

    // accsing the elemnts using the strct dat structure 
    cout <<p.x<<" ";
    cout<<p.y<<endl;


    // updating the valiue 
    p.x = 60;

    cout << p.sum();
    return 0;
}
