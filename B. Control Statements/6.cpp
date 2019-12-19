#include <iostream>
using namespace std;
int main()
{
  int x;
  cout<<"Enter month number : ";
  cin>>x;
  if(x==1||x==3||x==5||x==7||x==8||x==10||x==12)
  {
    cout<<x<<" is having 31 Days."<<endl;
  }
  else if(x==2)
  {
    cout<<x<<" is having 28 Days."<<endl;
  }
  else
  {
    cout<<x<<" is having 30 Days."<<endl;
  }
  return 0;
}
