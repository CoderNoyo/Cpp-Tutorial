#include<bits/stdc++.h>
using namespace std;
int main(){
    char a[10];
    cin>>a;
    if(a[8]=='A')
    {
        if(a[0]=='1' && a[1]=='2')
        {
            a[0]=a[1]='0';
        }
    }
    else
    {
        if(a[1]=='8')
        {
            a[0]='2';
            a[1]='0';
        }
        else if(a[1]=='9')
        {
            a[0]='2';
            a[1]='1';
        }
        else if(a[0]!='1' && a[1]!='2')
        {
            a[0]+=1;
            a[1]+=2;
        }
    }
    a[8]='\0';
    cout<<a;
    return 0;

}