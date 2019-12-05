//7) Find the remainder after dividing a by b, without using ‘%’ operator.

#include <iostream>
using namespace std;
int main()
{
  int x,y;
  cout<<"Enter your two numbers : ";
  cin>>x>>y;
  while(x>=y)
  {
    x=x-y;
  }
  cout<<"Remainder is "<<x<<endl;
  return 0;
}
