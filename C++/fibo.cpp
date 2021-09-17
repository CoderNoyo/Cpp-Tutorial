#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,t1=0,t2=1,nextT=0;
    cout<<"Enter the no of terms we need:- ";
    cin>>n;
    cout<<"Fibonacci Series: ";
    
    for(int i=1;i<=n;i++){
        if(i==1){
            cout<<t1<<", ";
            continue;
        }
        if(i==2){
            cout<<t2<<", ";
            continue;
        }
        nextT=t1+t2;
        t1=t2;
        t2=nextT;
        cout<<nextT<<", ";
    }
    return 0;
}
