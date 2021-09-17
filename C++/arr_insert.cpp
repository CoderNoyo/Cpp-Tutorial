#include<bits/stdc++.h>
using namespace std;
int main()
{
  int arr[5] ={2,7,1,8,5};
  int elem,n,i,temp;
  n= sizeof (arr)/ sizeof arr[0];
  for(i=0;i<5;i++)
  cout<<arr[i];
  cin>>elem;
  arr[i]=elem;
  for(i=0;i<6;i++)
  cout<<arr[i]<<endl;
  return 0;
}
