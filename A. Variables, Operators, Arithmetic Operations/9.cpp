//9) Write a program to swap two numbers, without using any extra variable.

#include <iostream>
using namespace std;
int main()
{
  int x,y;
  cout<<"Enter your two Numbers A and B : ";
  cin>>x>>y;
  x = x + y;
  y = x - y;
  x = x - y;
  cout<<"Now A is "<<x<<" and B is "<<y<<endl;
  return 0;
}
