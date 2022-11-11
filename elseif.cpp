#include<iostream>
using namespace std;
int main()
{
    int money;
    cout<<"enter the money u have? ";
    cin>>money;
    if (money>1000)
    {
        cout<<"let's have coffee in starbucks";
    }
    else if (money>500)
    {
        cout<<"let's have coffee in ccd";
    }
    else if (money>100)
    {
        cout<<"let's make tea at home";
    }
    else
    cout<<"let's go home";
    
    
}
