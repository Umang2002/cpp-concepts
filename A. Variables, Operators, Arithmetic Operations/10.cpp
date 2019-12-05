//10) The total seconds will be the input. Write a program to find the equivalent hours, minutes and seconds.

#include <iostream>
using namespace std;
int main()
{
  int input;
  int h,m,s;

  cout<<"Enter seconds : ";
  cin>>input;

  h = input/3600;
  m = (input - (h * 3600))/60;
  s = input - (h * 3600) - (m*60);

  cout<<h<<" hour, "<<m<<" minutes and "<<s<<" seconds"<<endl;

  return 0;
}
