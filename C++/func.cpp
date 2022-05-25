#include<bits/stdc++.h>
using namespace std;
int num()
{
    int n1,n2,n3,n4;
    int ans=0;
    cin>>n1>>n2>>n3>>n4;
    if(n1>=n2 && n1>=n3 && n1>=n4){
        cout<<n1;
    }
    else if(n2>=n1 && n2>=n3 && n2>=n4){
        cout<<n2;
    }
    else if(n3>=n1 && n3>=n2 && n3>=n4){
        cout<<n3;
    }
    else{
        cout<<n4;
    }
    return ans;
}
int main()
{
    // int n1,n2,n3,n4;
    // cin>>n1>>n2>>n3>>n4;
    int result=num();
    // cout<<result;
    return 0;
}
