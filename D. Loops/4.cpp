#include <iostream>
using namespace std;
int main()
{
  int num=0; //A long Integer Number
  int g1=0, g2=0;  //g1 for Largest.  //g2 for second Largest.
  cout<<"Enter a number : ";
  cin>>num;
  while(num!=0) //Loop to get last digit of Number
  {
      int temp = num%10;  //Temp contain Last digit.

      if(temp>g2)  //Check if Last digit greater than g2. //If Yes, Go on.
      {
          if(temp>=g1) //Check if Last digit greater than g1. //If Yes, Update Largest Number.
          {
              g2 = g1;  //Transfer Largest num to, Second Largest.
              g1 = temp;
          }
          else //If No, Update as Second Largest.
          {
              g2 = temp;
          }
      }
      //If No, Next Digit.
      num = num/10; //Removing Last digit from Number.
  }
  cout<<"Second Largest Digit is : "<<g2;
  return 0;
}
