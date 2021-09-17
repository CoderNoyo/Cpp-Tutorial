#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum=0,num,digit;
    cout<<"Entre a number:- ";
    cin>>num;
    n=num;
    do
    {
        digit=num%10;
        sum=(sum * 10)+digit;
        num=num/10;
    }
    while(num!=0);
    cout<<"Reverse of the no is:- "<<sum<<endl;
    if(n==sum)
    cout<<"Palindrome";
    else
    cout<<"Not Palindrome";
    return 0;
}