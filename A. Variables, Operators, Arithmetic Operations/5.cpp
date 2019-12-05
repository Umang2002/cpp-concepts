//5) Find the difference between purchase price and selling price.

#include <iostream>
using namespace std;
int main()
{
  float x,y;
  cout<<"Enter your Purchase Price : ";
  cin>>x;
  cout<<"Enter your Selling Price : ";
  cin>>y;
  if(y>x)
  {
    cout<<"You made a Profit of "<<y-x<<endl;
  }
  else
  {
    cout<<"You made a Loss of "<<x-y<<endl;
  }
  return 0;
}
