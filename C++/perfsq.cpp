#include<bits/stdc++.h>
using namespace std;
bool isPerfsq(long long x){
    if(x>=0){
        long long sr=sqrt(sr);
        return (sr *sr==x);
    }
    return false;
}

int main(){
    long long x;
    cout<<"Enter ";
    cin>>x;
    if (isPerfsq(x))
        cout<<"Yes";
    else
        cout<<"No";
    return 0;

}
