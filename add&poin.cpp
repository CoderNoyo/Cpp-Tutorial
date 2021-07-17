#include<bits/stdc++.h>
using namespace std;

void swap(int* swp1, int *swp2){
  cout<<*(int*)swp1<<endl;
  int temp = *swp1;
  *swp1 = *swp2;
  *swp2 = temp;
}

int main()
{
  int a= 1437;
  int* pnt = &a;
  int** pnt2 = &pnt;
  printf("%p\n",(int*)pnt);
  printf("%x\n",(int)*pnt);
  printf("%u\n",(int*)*pnt2);

  int arr[] = {1,2,3,4,5,6,7,8,9,10};
  cout<<*arr+1<<endl;

  int n1 = 4;
  int n2 = 5;
  // int temp = n2;
  // n2 = n1;
  // n1 = temp;
  cout<<n1<<" "<<n2<<endl;
  swap(&n1,&n2);
  cout<<n1<<" "<<n2<<endl;
}
