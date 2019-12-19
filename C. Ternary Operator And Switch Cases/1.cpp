#include <iostream>
using namespace std;
int main()
{
  int x,y;
  cout<<"Enter two numbers : ";
  cin>>x>>y;

  cout<<"Largest between "<<x<<" and "<<y<<" is : ";
  x>y ? cout<<x<<endl : cout<<y<<endl;
  return 0;
}
