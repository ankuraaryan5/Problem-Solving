#include<iostream>
using namespace std;
int main()
{
    int money, age_partner;
    cout<<"enter money u have ? "<<endl;
    cin>>money;
    
    if (money>1000)
    {
        cout<<"enter age of your partner "<<endl;
        cin>>age_partner;
        if (age_partner>21)
        {
            cout<<"let's have wine";
        }
        else
        {
            cout<<"let's have coffee in starbucks";
        }
    }
    else
    {
        if (money>500)
        {
            cout<<"let's have coffee in ccd";
        }
        else
        {
            cout<<"let's make tea at home";
        }
    }
    
}
