#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[5]={5,4,3,6,7};
    int mx=INT_MIN,mn=INT_MAX;
    for(int i=0;i<5;i++){
        if(arr[i]>mx)mx=arr[i];
        if(arr[i]<mn)mn=arr[i];
    }
    cout<<"MAX is"<<mx<<endl;
    cout<<"MIN is"<<mn<<endl;
    return 0;
}