#include<bits/stdc++.h>
using namespace std;

  int power(int basenum,int pownum)
  {
    int result=1;
    for(int i=0; i<pownum; i++)
    {
      result *= basenum;
    }
    return result;
  }
  int main()
  {
    cout<< power(4,2);
    return 0;
  }
