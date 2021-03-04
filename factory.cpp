#include<bits/stdc++.h>
using namespace std;

class factory{
private:
  string item1;
  string item2;
  string item3;
public:
  void setI1(string i1){
    this->item1 = i1;
  }
  void setI2(string i2){
    this->item2 = i2;
  }
  void setI3(string i3){
    this->item3 = i3;
  }
  string getI1(){
    return this->item1;
  }
  string getI2(){
    return this->item2;
  }
  string getI3(){
    return this->item3;
  };
};

int main(){
  factory choco;
  factory icecream;
  choco.setI1("dm");
  icecream.setI2("kk");
  choco.setI2("gm");
  icecream.setI3("jd");
  choco.setI3("am");
  icecream.setI1("nm");

  cout<<choco.getI1()<<" "<< choco.getI2()<<" "<< choco.getI3()<<endl;
  cout<<icecream.getI1()<<" "<< icecream.getI2()<<" "<<icecream.getI3();
  return 0;

}
