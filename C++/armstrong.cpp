#include<bits/stdc++.h>
using namespace std;
int main(){
    int num,r,sum=0, temp;
    cout<<"Enter no to check:- ";
    cin>> num;
    temp =num;

    while(num>0)
    {
        r=num%10;
        sum=sum + (r * r * r);
        num=num/10;
    }
    if(temp == sum)
    cout<<"Armstrong"<<endl;
    else
    cout<<"Not Armstrong"<<endl;
    return 0;
}