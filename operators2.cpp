#include<iostream>
using namespace std;
int main()
{
    //logical operators
    int a = 32, b=43, c=21;
    float d = !0;
    cout<<"value of d is "<<d<<endl;
    if((a>b)&&(b>c)){
    cout<<"a is the greatest"<<endl;
    }
    else if ((b>a)&&(b>c))
    {
       cout<<"b is the greatest"<<endl;
    }
    else
    cout<<"c is the greatest"<<endl;
    // bitwise operator
    int x=23, y=9;
    cout<<"x&y "<<(x&y)<<endl;
    cout<<"x|y "<<(x|y)<<endl;
    cout<<"~x "<<(~x)<<endl;
    cout<<"x^y "<<(x^y)<<endl;
    cout<<"x<<1 "<<(x<<1)<<endl;
    cout<<"x>>1 "<<(x>>1)<<endl;
}
