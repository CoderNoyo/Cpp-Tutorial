#include<bits/stdc++.h>
using namespace std;
int main()
{
  map<string,int>hi;
  int m=3;
  for(int k=0;k<3;k++)
  {
    string p;
    int v;
    cin>>p;
    cin>>v;
    hi.insert({p,v});
  }
  for(auto k:hi )
  {
    cout<<k.first<<"  "<<k.second<<endl;
  }
  return 0;
}
