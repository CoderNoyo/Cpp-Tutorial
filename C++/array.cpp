#include<bits/stdc++.h>
using namespace std;
int main()
{
  int arr[10], i, n,pos;
  char M;
  n=sizeof (arr)/sizeof arr[0];
  cout<<"Enter element of array "<<endl;
  for(i=0; i<n;i++){
    cin>>arr[i];
    if(arr[i]==M){
      cout<<"Cant proceed "<<endl;
      break;
    }
  }
  if(arr[i]==M){
    pos=i;
    cout<<"The index of last number is "<<pos;
  }
  
  return 0;
}
  
  
