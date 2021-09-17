#include<bits/stdc++.h>
using namespace std;
int main()
{
  // 0xfe42ab  0xfe42b2
  vector<int> noyo = {1,56,15,26,48};
  // for(int i=0;i<5;i++){
  //   cout<< noyo[i] << " ";
  // }
  for(auto i:noyo){
    cout<<i<<endl;
  }
  noyo.push_back(30);
  for(auto i:noyo) cout<<i<<endl;
  noyo.erase(noyo.begin()+1);
  noyo.pop_back();
  noyo.emplace(noyo.end()-2,84);
  for(auto i :noyo) cout<<i<<endl;
  cout<<noyo.size()<<endl;
  cout<<*max_element(noyo.begin(),noyo.end())<<endl;
  cout<<*min_element(noyo.begin(),noyo.end())<<endl;
  cout<<binary_search(noyo.begin(),noyo.end(),1)<<endl;
  auto res = find(noyo.begin(),noyo.end(),31);
  if(res!=noyo.end()){
    cout<<"Found at "<<res-noyo.begin()<<" position."<<endl;
  }
  else cout<<"Not Found"<<endl;
  // sort(noyo.begin(),noyo.end());
  sort(noyo.begin(),noyo.end(),greater<int>());
  for(auto i:noyo) cout<<i<<endl;
  return 0;
}
