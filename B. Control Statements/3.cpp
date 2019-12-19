#include <iostream>
using namespace std;
int main()
{
  int x,y;
  cout<<"Enter two numbers : ";
  cin>>x>>y;

  if(x^y)
    cout<<"Not Same."<<endl;
  else
    cout<<"Same."<<endl;

  return 0;
}
