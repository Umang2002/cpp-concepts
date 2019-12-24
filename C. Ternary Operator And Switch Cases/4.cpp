#include <iostream>
using namespace std;
int main()
{
  int x, leap=0;
  cout<<"Enter a year : ";
  cin>>x;
  cout<<x<<" is ";
  x%4==0 && x%100!=0 ? leap=1 : (x%400==0 ? leap=1 : leap=0));
  leap==1 ? cout<<"This is leap year. " : cout<<"This is not a leap year.";
  return 0;
}
