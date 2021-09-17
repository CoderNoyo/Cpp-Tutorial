// // In this prog, we differentiated between void and int return type. In void type statement methods we use to all process to get printed
//  or used in that method only, means we cant use that method to get printed or to give return type value in main methods. hence, we have
//  to print that whole process in that particular method only i.e. on void method. 
//                          // On the other hand in int or return type statement if we use it anywhere then we can need not have to 
// give compulsarly any print type command as we can easily use it in any other method. we can access it in any method we want. but it 
// cant be possible in void type return statement. 

// // void - have to print/ complete the whole process there only.
// // int/ return type - we can use it any where so to store that we us the return type command to use in other place. 





#include<bits/stdc++.h>
using namespace std;

int add_k(int r,int v)
{
    int c;
    c=r+v;
    //  cout<<c;
    return c;
} 

int subs(int r, int v)
{
    int k;
    k=r-v;
    return k;
}

int mult(int j, int h){
    int g=j*h;
    // cout<<g<<endl;                // we can optionally print here also or can just leave as in original code to use in main method.
    return g;

}

 void cross(int h, int j) 
 {
    int o=h*j;
    // cout<<"Multiplying the value of add and mult:- "<< o << endl;          // compulsorily we have to print here.
 }


int main()
{
    int a,b;
    cout<<"Enter no-"<<endl;
    cin>>a>>b;

    cout<<"No is:-  "<<a<< " and "<<b<<endl;
    // int d=a+b;
    // cout<<d;
    int y= add_k(a,b);
    int l= subs(a,b);
    // cout<<y*l;
    cout<<"Add:- " << y <<endl<<"Subs:- " << l <<endl;
    int i=mult(y,l);
    cout<<"Multiply:- "<< i <<endl;
    cross(y,i);
    
}