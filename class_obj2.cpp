#include<bits/stdc++.h>
using namespace std;
class Employee {
public:
  string Name;
  string Company;
  int Age;

  void IntroduceYourself() {
    cout<< " Name- "<< Name << std::endl;
    cout<< " Company- "<< Company << std::endl;
    cout<< " Age- "<< Age << std::endl;
  }
};
int main()
{
  Employee employee1;
  employee1.Name= " Ram";
  employee1.Company= " XYZ ";
  employee1.Age= 25;
  employee1.IntroduceYourself();
}
