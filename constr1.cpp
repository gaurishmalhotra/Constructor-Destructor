#include <iostream>
using namespace std;
class Date
{
int d;
int m;
int y;
    public :
    Date()
    {
        d=5;
        m=9;
        y=2024;
        cout<<"today's date:"<<d<<"/"<<m<<"/"<<y<<endl;
        }
};
int main()
{
    Date today;
}
//output
/*today's date:5/9/2024*/
