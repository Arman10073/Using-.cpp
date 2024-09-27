#include<iostream>
using namespace std;

int main()
{
             int x=10;
             int y=20;
             
             x=x^y;
             y^=x;
             x^=y;
 
         cout<<"value of x:"<<x<<endl;
         cout<<"value of y:"<<y<<endl;
 
    return 0;
}