#include<bits/stdc++.h>
using namespace std;
class Book{
  public:

    string title;
    string author;
    int pub_date;
    int page,
  };
  int main()
  {
    Book book1;
    book1.title =" Merchant of Venice";
    book1.author =" W.Shakespeare";
    book1.pub_date= 1607;
    book1.page= 800;

    Book book2;
    book2.title =" Invisible Man";
    book2.author =" ralph Ellison ";
    book2.pub_date= 1897;
    book2.page= 700;

    cout<<book1.author<<endl;
    return 0;
  }
