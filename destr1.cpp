
#include<iostream>
using namespace std;
int count=0;
class Student
{
    public: 
    Student()
    {
        count++;
        cout<<"Number of objects created: "<<count<<endl;
    }
    ~Student()
    {
        count--;
        cout<<"Number of objects destroyed: "<<count<<endl;
    }
};

int main()
{
    Student aa,bb,cc;
    {
        Student dd;
    }
    return 0;
}

/*
OUTPUT: 
Number of objects created: 1
Number of objects created: 2
Number of objects created: 3
Number of objects created: 4
Number of objects destroyed: 3
Number of objects destroyed: 2
Number of objects destroyed: 1
Number of objects destroyed: 0
*/
