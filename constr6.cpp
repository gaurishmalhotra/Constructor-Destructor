
//Parameterized Constructor
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
    Pconstruct obj(5,6);
    obj.putdata();
}

/*
OUTPUT:
a=5
b=6
*/
