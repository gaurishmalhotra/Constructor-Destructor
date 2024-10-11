#include<iostream>
using namespace std;
class Construct
{
    int a,b;
    public:
    Construct()
    {
        a=10;
        b=30;
    }
    
    void putdata()
    {
        cout<<"a="<<a<<endl<<"b="<<b;
    }
};

int main()
{
    Construct object1;
    object1.putdata();
}

/*
OUTPUT: 
a=10;
b=30;
*/
