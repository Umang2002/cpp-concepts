#include <iostream>
using namespace std;
int main()
{
  int x,y,z,grt;
  cout<<"Enter your three Numbers : ";
  cin>>x>>y>>z;
  if(x-y>0)
  {
    // x>y
    if(z-x>0)
    {
      //z is largest
      grt = z;
    }else{
      //x is largest
      grt = x;
    }
  }else{
    //y>x
    if(z-y>0)
    {
      //z is largest
      grt = z;
    }else{
      //y is largest
      grt = y;
    }
  }
  cout<<"Maximum between "<<x<<", "<<y<<" and "<<z<<" is : "<<grt<<endl;
  return 0;
}
