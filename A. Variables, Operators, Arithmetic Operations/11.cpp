//11) Number of days will be input. Write a program to find, how years, months and days?

#include <iostream>
using namespace std;
int main()
{
  int input;
  int y,m,d;

  cout<<"Enter days : ";
  cin>>input;

  y = input/365;
  m = (input - (y * 365))/30;
  d = (input - (y * 365)) - (m*30);

  cout<<y<<" year, "<<m<<" months and "<<d<<" days"<<endl;

  return 0;
}
