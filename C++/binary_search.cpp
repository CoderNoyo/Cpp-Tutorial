#include<bits/stdc++.h>
using namespace std;

int binary_search(int arr[], int low,int high, int num){
    if(low <= high){
        int mid= (low+high)/2;
        if(arr[mid]==num)
        return mid;
        if(arr[mid]<num)
        return binary_search(arr, mid+1, high,num);
        if(arr[mid]>num)
        return binary_search(arr, low, mid-1, num);
    }
    return -1;
}

int main()
{
    int arr[10]={2,5,8,12,16,23,38,56,72,91},elem,mid,i;
    int n=sizeof (arr)/sizeof arr[0];
    int num;
    cout<<"No to search= "<<endl;
    cin>>num;
    int index= binary_search(arr, 0, n-1, num);
    if(index==-1){
        cout<<num<<" not present "<<endl;
    }
    else{
        cout<<num<<"is present at"<<index;
    }
    return 0;

}