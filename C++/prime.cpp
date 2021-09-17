#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    bool isPrime=true;
    cout<<"Enter a number:- ";
    cin>>n;

    for(i=2;i<n;i++){
        if(n%i==0){
            isPrime =false;
            break;
        }
    }
    if (isPrime)
    cout<<"Prime";
    else
    cout<<"Not Prime";
    return 0;
}