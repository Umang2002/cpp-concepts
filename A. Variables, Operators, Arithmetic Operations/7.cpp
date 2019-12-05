//7) Find the remainder after dividing a by b, without using ‘%’ operator.

#include <iostream>
using namespace std;
int main()
{
  int x,y;
  cout<<"Enter your two numbers : ";
  cin>>x>>y;
  int r = x-((x/y)*y);
  cout<<"Remainder is "<<r<<endl;
  return 0;
}
