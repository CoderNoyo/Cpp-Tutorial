#include<bits/stdc++.h>
using namespace std;

void swap(int &a, int &b){
    int temp;
    temp=a;
    a=b;
    b=temp;
}

void selection_sort(int arr[], int size){
    int i,j, min_i;
    for(i=0;i<size-1;i++){
        min_i=i;
        for(j=i+1;j<size;j++)
            if(arr[j]<arr[min_i])
            min_i = j;
            swap(arr[i],arr[min_i]);
            // min_i = j;
            // cout<<arr[i]<<endl;
    }
}

void display(int *arr,int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<endl;
    }
}


int main(){
    int arr[5]={50,60,40,10,30},n;
    n=sizeof (arr)/sizeof arr[0];
    cout<<" Before sorting"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i];
        cout<<endl;
    }
    selection_sort(arr,n);
    cout<<" After sort "<<endl;
    display(arr,n);
}