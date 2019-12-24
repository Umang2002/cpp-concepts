#include <iostream>
using namespace std;
int main()
{
  int x,y;
  cout<<"Enter your two Numbers A and B : ";
  cin>>x>>y;
  if(x>y)
    cout<<"Maximum between "<<x<<" and "<<y<<" is : "<<x<endl;
  else
    cout<<"Maximum between "<<x<<" and "<<y<<" is : "<<y<<endl;
  return 0;
}
