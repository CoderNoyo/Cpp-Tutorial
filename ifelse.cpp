#include<bits/stdc++.h>
using namespace std;

int main()
{
  bool isIEM= true;
  bool isME= true;
  bool isJHAJHA= false;
  bool isASA= true;

  if(isIEM && isME && isJHAJHA){
    cout<< " I am a Noyonika";
  }
  else if(isIEM && isME && isJHAJHA){
    cout<< " I am Angshu";
  }
  else if(isIEM && isME && isASA){
    cout<< " I am Joti";
  }
  else {
    cout<<" I am Soumya";
  }
  return 0;
}
