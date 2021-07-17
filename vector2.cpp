#include<bits/stdc++.h>
using namespace std;
int main()
{
  vector <int> abc = {10,50,20,30,70,60};
  cout<<" Print it = "<<endl;
  for (auto i:abc){
    cout<<i<<endl;
  }
  cout<<" Print with adding element 25 at end = "<<endl;
  abc.push_back(25);
  for(auto i:abc) cout<<i<<endl;

  // abc.pop_back(1);
  // cout<<" Print with removing 1 element from back= "<<endl;
  // for(auto i:abc) cout<<i<<endl;

  cout<<" Total size= "<< abc.size()<<endl;

  cout<<" Max element = "<<*max_element(abc.begin(),abc.end())<<endl;
  cout<<" Min element = "<<*min_element(abc.begin(),abc.end())<<endl;
  cout<<" Capacity = "<<abc.capacity()<<endl;
  // cout<<" Resize = "<<abc.resize(8);

  // abc.shrink_to_fit();
  // cout<<" Shrink to fit = "<<endl;
  // for(auto i=abc.begin(); i!= abc.end(); i++)
  // cout<<*i <<endl;

  cout<<" Returns front element = "<<abc.front()<<endl;
  cout<<" Returns last element = "<<abc.back()<<endl;
  cout<<" Returns n th element = "<<abc.at(4)<<endl;
  cout<<" Returns reference operator element = "<<abc[2]<<endl;

  abc.insert(abc.begin(), 2);
  cout<<" Insert element = "<<endl;
  for(auto i:abc) cout<< i <<endl;

  abc.erase(abc.begin()+1);
  cout<<" Erase element from beginning = "<<endl;
  for(auto i:abc) cout<<i<<endl;

  abc.emplace(abc.end()-2,84);
  cout<<" Emplace new element = "<<endl;
  for(auto i :abc) cout<<i<<endl;

  sort(abc.begin(),abc.end());
cout<<"Hello Kitty"<<endl;
  cout<<" Do sorting = "<<endl;
  for(auto i:abc) cout<<i<<endl;

  cout<<binary_search(abc.begin(),abc.end(),1)<<endl;
  auto k = find(abc.begin(),abc.end(),50);
  if(k!=abc.end()){
    cout<<"Found at "<<k-abc.begin()<<" position."<<endl;
  }
  else cout<<"Not Found"<<endl;
  return 0;
}
