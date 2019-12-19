#include <iostream>
using namespace std;
int main()
{
  int num=0,f=0,l=0;
  cout<<"Enter a number : ";
  cin>>num;
  f=num;

  while(f>10)
  {
    f /= 10;
  }
  cout<<"First Digit is : "<<f<<endl;

  l = num%10;
  cout<<"Last Digit is : "<<l<<endl;

  return 0;
}
