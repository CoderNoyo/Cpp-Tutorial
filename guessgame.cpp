#include<bits/stdc++.h>
using namespace std;
int main()
{
  int correctNO= 8;
  int guess;
  int totalattempt=0;
  int attemptlimit=5;
  bool incorrectguess= false;

  while(correctNO != guess && !incorrectguess)
  {
    if(totalattempt < attemptlimit)
    {
      cout<< "Enter guess: ";
      cin>> guess;
      totalattempt++;
    }
    else
      {
        incorrectguess = true;
      }
    }
    if(incorrectguess)
    {
      cout<<"Lose";
    }
    else
    {
       cout<<"win";
    }
  return 0;
}
