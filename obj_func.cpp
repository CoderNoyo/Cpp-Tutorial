#include<bits/stdc++.h>
using namespace std;

class Stu {
  public:
    string name;
    string deprt;
    double gpa;
    Stu(string aname, string adeprt, double agpa){
      this->name= aname;
      deprt = adeprt;
      gpa = agpa;
    };

  bool Honors()
  {
    if (gpa>=6){
      return true;
    }
    return false;
  }
  void black(int amount){
    if(amount>10000) this->gpa +=2;
    else this->gpa += 1;
  };
};

int main()
{
  Stu stu1(" Abc", "ME", 7.2);
  Stu stu2(" Abc2", " ME", 4.7);
  cout<<stu1.Honors()<<endl;
  cout<<stu2.Honors()<<endl;
  stu2.black(11000);
  cout<<stu2.Honors();
  return 0;
}
