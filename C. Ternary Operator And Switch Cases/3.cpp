#include <iostream>
using namespace std;
int main()
{
  int x;
  cout<<"Enter a number : ";
  cin>>x;
  cout<<x<<" is a ";
  x%2==0 ? cout<<"even." : cout<<"odd.";
  return 0;
}
