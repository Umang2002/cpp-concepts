#include <iostream>
using namespace std;
int main()
{
  int x,y,z;
  cout<<"Enter three numbers : ";
  cin>>x>>y>>z;

  cout<<"Largest between "<<x<<", "<<y<<" and "<<z<<" is : ";
  x>y ? (z>x ? cout<<z : cout<<x) : (z>y ? cout<<z : cout<<y);
  return 0;
