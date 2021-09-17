// Neha a girl loves to travel.but she is allowed aonly in odd days. Also she receives poscket money of 3k every month. whenever she 
// goes out she spends some of it. if pocket money is finifsh she cant go out. write code for the process...


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,pocketMoney=1000,day;
    cout<<"Enter the specific day to test:- "<<endl;
    cin>>day;
    for(i=0;i<=30;i++)
    {
        if(i%2==0){             // whenever it is even day then skip that day,and go to next iteration of loop.
            continue;          // use to skip
        }

        if(pocketMoney==0 ){           //whenever pocket money is 0 break the loop 
            break;
        }
        cout<<"Go out Today"<<endl;
    }
    return 0;
}