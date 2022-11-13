#include<iostream>
using namespace std;
int main()
{
    // arithmetic
    int x =10, y=4;
    cout<<"addition:"<<x+y<<endl;
    cout<<"subtraction:"<<x-y<<endl;
    cout<<"multiplication:"<<x*y<<endl;
    cout<<"division:"<<x/y<<endl;
    cout<<"modulo:"<<x%y<<endl;
    //post and pre increment operator
    int a =12;
    int b;
    b=++a;
    cout<<"b= "<<b<<endl<<"a= "<<a<<endl;
    b=a++;
    cout<<"b= "<<b<<endl<<"a= "<<a<<endl;
    //post and pre decrement operator
    int c =12;
    int d;
    d=--c;
    cout<<"d= "<<d<<endl<<"c= "<<c<<endl;
    d=c--;
    cout<<"d= "<<d<<endl<<"c= "<<c<<endl;
    int r= 32;
    int s;
    // s=--(r+2); //not permitted
    cout<<"r= "<<r<<endl;

    //relational operator
    int m = 3, n=4;
    cout<<"m<n: "<<(m<n)<<endl;
    cout<<"m>n: "<<(m>n)<<endl;
    cout<<"m=n: "<<(m==n)<<endl;
    cout<<"m!=n: "<<(m!=n)<<endl;
    cout<<"m<=n: "<<(m<=n)<<endl;
    cout<<"m>=n: "<<(m>=n)<<endl;
}
