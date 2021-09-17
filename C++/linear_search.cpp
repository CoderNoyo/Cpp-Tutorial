#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[5]= {10,30,50,60,70}, elem,i,p;
    cout<<"Enter elem= "<<endl;
    cin>>elem;
    for(i=0;i<5;i++)
    {
        if(arr[i]==elem)
        {
            p=i;           //use to print the index of the element
            cout<<p;
        }
    }
    return 0;
}