#include<bits/stdc++.h>
using namespace std;
int main()
{
  string phrase= "Education Unacademy";
  cout<< phrase[5] <<endl;

  cout<< phrase.find("Un",0)<< endl;;

  cout<<phrase.substr(0,9)<<endl;

  string storephrase;
  storephrase= phrase.substr(10,12);
  cout<< storephrase<<endl;

  storephrase[0]= 'I';
  cout<< storephrase;

  return 0;
}
