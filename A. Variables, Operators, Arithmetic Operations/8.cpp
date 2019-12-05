//8) Write a program to swap two numbers.

#include <iostream>
using namespace std;
int main()
{
  int x,y;
  cout<<"Enter your two Numbers A and B : ";
  cin>>x>>y;
  int temp;
  temp = x;
  x = y;
  y = temp;
  cout<<"Now A is "<<x<<" and B is "<<y<<endl;
  return 0;
}
