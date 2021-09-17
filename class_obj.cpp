#include<bits/stdc++.h>
using namespace std;
class Book{
private:

    string title = " Merchant of Venice";
    string author =" W.Shakespeare";
    int pub_date = 1607;
    int page = 567;
public:
  string getTitle(){
    return this->title;
  }
  void setTitle(string name){
    this->title = name;
  }
    void prntTitle(){
      cout<<this->title;
    };
  };
  int main()
  {
    Book book1;
    book1.prntTitle();
    // cout<<book1.title;
    // book1.title =" Merchant of Venice";
    // book1.author =" W.Shakespeare";
    // book1.pub_date= 1607;
    // book1.page= 800;

    Book book2;
    book2.setTitle("Invisible Man");
    cout<<book2.getTitle();
    // book2.author =" ralph Ellison ";
    // book2.pub_date= 1897;
    // book2.page= 700;

    // cout<<book1.author<<endl;
    return 0;
  }
