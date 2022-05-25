#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i;
    cout<<"Enter a no:"<<endl;
    cin>>n;
    cout<<"Factorial of: "<<n<<endl;
    for(i=1;i<=n;i++){
        if(n%i==0)
        cout<<i<<",";
    }
    return 0;
}