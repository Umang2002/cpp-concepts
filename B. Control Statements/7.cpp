#include <iostream>
using namespace std;
int main()
{
  int x;
  cout<<"Enter year : ";
  cin>>x;
  if(x%4==0)
  {
    cout<<x<<" is a Leap Year."<<endl;
  }
  else
  {
    cout<<x<<" is not a Leap Year."<<endl;
  }
  return 0;
}
