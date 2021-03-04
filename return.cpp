#include<bits/stdc++.h>
using namespace std;

void cube(double NOs, double arr[])
{
  double product = 1, product2 = 1;
  // double arr[2];
  for(int i=0;i<3;i++){
    product *= 8;
    product2 *= 5;
  }
  arr[0] = product;
  arr[1] = product2;

  // return arr;
  // return NOs * NOs * NOs;
}
int main()
{
  double arr[2];
  cube(8, arr);
  cout<<arr[0]<<endl<< arr[1];
  // cout<< cube(8);
  return 0;
}
