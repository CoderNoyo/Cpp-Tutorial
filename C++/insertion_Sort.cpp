#include<bits/stdc++.h>
using namespace std;

void insertion_sort(int arr[],int size){
    int min,j,temp;
    for(int i=1;i<size;i++){
        min=i;
        for(int j=size;j>=i+1;j--){
            if(arr[min]>arr[j]){
                arr[j]=arr[j-1];
                min=j;
            }
        }
    }
}


void print(int arr[], int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<endl;
    }
}

int main (){
    int arr[5]={5,2,8,4,6},n;
    n=sizeof (arr)/sizeof arr[0];
    cout<<" Before sorting"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i];
        cout<<endl;
    }
    insertion_sort(arr,n);
    cout<<" After sorting"<<endl;
    print(arr,n);
}