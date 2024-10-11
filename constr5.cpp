
//Asking user for input in parameterized constructor
#include<iostream>
using namespace std;
class Pconstruct
{
    int a,b;
    public:
    Pconstruct(int n, int m)
    {
        a=n;
        b=m;
    }
    
    void putdata()
    {
        cout<<"a="<<a<<endl<<"b="<<b;
    }
};

int main()
{
    int x, y;
    cin>>x>>y;
    Pconstruct obj(x,y);
    obj.putdata();
}

/*
OUTPUT: 
3 4
a=3
b=4
*/
