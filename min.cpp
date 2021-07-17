#include<bits/stdc++.h>
using namespace std;
int main(){
  int num=10;
  int arr[num]= {2,3,1,5};
  int maximum=arr[0];
  int minimum=arr[0];
  for(int i=0;i<num-6;i++)
  {
    if(maximum<arr[i])
    {
      maximum=arr[i];
    }
    if(minimum>arr[i])
    {
      minimum=arr[i];
    }
  }
  cout<<"Max:- "<<maximum<<endl<<"Min:- "<<minimum<<endl;
  return 0;
}
