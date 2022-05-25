#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin>>n;                //3
    string name;
    long no;
    map<string,long>phnbook;
    int i;
    for( i=0;i<n;i++)
    {
        cin>>name;           //sam,tom,harry
        cin>>no;             //235,456,789
        phnbook.insert({name , no});
    }
    while(cin>>name)             //sam,edward,harry       //while used when no of iteration or inputs is not decided
    {
        auto i=phnbook.find(name);

        if( i !=phnbook.end())
        {
            cout<<i->first<<"="<<i->second<<endl;
        }
        else {
            cout<<"Not found"<<endl;
        }
    }
    return 0;
}
