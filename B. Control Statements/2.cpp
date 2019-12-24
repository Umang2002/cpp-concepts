#include <iostream>
using namespace std;
int main()
{
  int x,y,z,grt;
  cout<<"Enter your three Numbers : ";
  cin>>x>>y>>z;
  if(x-y>0)
  {
    if(z-x>0)
      grt = z;
    else
      grt = x;
  }
  else
  {
    if(z-y>0)
      grt = z;
    else
      grt = y;
  }
  cout<<"Maximum between "<<x<<", "<<y<<" and "<<z<<" is : "<<grt<<endl;
  return 0;
}
