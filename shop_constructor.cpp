#include<bits/stdc++.h>
using namespace std;
class Shop{
public:
  string Shopname;
  string Cloth_type;
  string Colour;
  int Nos;

  void IntroduceShop(){
    cout<< " Shopname- "<<Shopname<< std::endl;
    cout<< " Clothtype - "<<Cloth_type<< std::endl;
    cout<< " Colour- "<<Colour<<std::endl;
    cout<< " No of piece- "<<Nos<<std::endl;
  }
  Shop(string name, string cloth, string colour, int no_of_pieces) {
    Shopname= name;
    Cloth_type= cloth;
    Colour= colour;
    Nos= no_of_pieces;
  }
};
int main()
{
  Shop Shopkeeper1 = Shop(" Ram", "Pant", " Blue", 20);
  // Shopkeeper1.Shopname= " Ram ";
  // Shopkeeper1.Cloth_type= " Pant ";
  // Shopkeeper1.Colour= " Blue ";
  // Shopkeeper1.Nos= 20;
  Shopkeeper1.IntroduceShop();

}
