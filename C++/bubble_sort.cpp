#include<bits/stdc++.h>
using namespace std;

void swap(int &p, int &k){
    int temp;
    temp=p;
    p=k;
    k=temp;
}

void bubble_sort(int arr[], int size){
    for(int i=0;i<size;i++){
        int swaps=0;
        for(int j=0;j<=size-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swaps=1;
            }
        }
        if(!swaps)
        break;   
    }
}

void display(int arr[], int size){
    for(int i=0;i<=size;i++){
        cout<<arr[i]<<endl;
    }
}

int main(){
    int arr[5]={50,30,20,10,40},i;
    int n=sizeof (arr)/sizeof arr[0];
    cout<<"Before Sorting"<<endl;
    for(i=0;i<n;i++){
        cout<<arr[i];
        cout<<endl;
    }
    bubble_sort(arr,n);
    cout<<" After sorting"<<endl;
    display(arr,n);
}