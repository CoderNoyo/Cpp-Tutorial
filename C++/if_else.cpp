// Write a code in which according to your money saving you will be going for tours. here we also provide condition/desicion between
// if and else under which again condition is being also provided to have a choise.


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int money;
    cout<<"Enter amount of money:- "<<endl;
    cin>>money;

    if(money>10000){
        if(money>150000){
            cout<<"Go for lunch"<<endl;
        }
        else{
            cout<<"Go for dinner "<<endl;
        }
    }
    else if(money>6000){
        cout<<"Go to Hills"<<endl;
    }
    else{
        cout<<"Go to beach "<<endl;
    }
    return 0;
}