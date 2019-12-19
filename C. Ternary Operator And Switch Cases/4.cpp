#include <iostream>
using namespace std;
int main()
{
  int x;
  cout<<"Enter a year : ";
  cin>>x;
  cout<<x<<" is ";
  x%4==0 ? cout<<"a leap year." : cout<<"not a leap year.";
  return 0;
}
