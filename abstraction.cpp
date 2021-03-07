#include<bits/stdc++.h>
using namespace std;

class AbstractShop {
  virtual void AskForPromotion()=0;         //abstraction
};

class Shop:AbstractShop{
private:
  string Shopname;
  string Cloth_type;
  string Colour;
  int Nos;
public:
  void setShopname(string name){          //setters
    Shopname = name;
  }
  string getShopname(){                   //getters
    return Shopname;
  }
  void setCloth_type(string cloth){          //setters
    Cloth_type = cloth;
  }
  string getCloth_type(){                   //getters
    return Cloth_type;
  }
  void setColour(string colour){          //setters
    Colour = colour;
  }
  string getColour(){                   //getters
    return Colour;
  }
  void setNos(int no_of_pieces){          //setters
    if(Nos>=18)
    Nos = Nos;
  }
  int getNos(){                   //getters
    return Nos;
  }


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
  void AskForPromotion() {            //if this line not given then further Shopkeeper1.AskForPromotion() - will not work
    if (Nos>100)
    cout<<Shopname<<" Got Succesfully Promoted! "<<endl;
    else
    cout<< Shopname<< " Not Promoted! "<<endl;
  }
};
int main()
{
  Shop Shopkeeper1 = Shop(" Ram", "Shirt", " Blue", 120);

  Shopkeeper1.AskForPromotion();
  // Shopkeeper1.IntroduceShop();

  // Shopkeeper1.setShopname(" Rahul");
  // cout<<endl<< Shopkeeper1.getShopname()<< " is the shopkeeper's name. "<<endl;
  // cout<< Shopkeeper1.getCloth_type()<< " is the cloth type. "<<endl;
  // cout<< Shopkeeper1.getColour()<< " is the chosen colour. "<< endl;
  // Shopkeeper1.setNos(10);
  // cout<< Shopkeeper1.getNos()<< " is the no of pieces brought. "<<endl;

}
