#include <iostream>
using namespace std;
int main()
{
  int num=0,rev=0;
  cout<<"Enter a number : ";
  cin>>num;

  while(num>0)
  {
    rev += num%10;
    num /= 10;
    rev *= 10;
  }
  rev /= 10;
  cout<<"Reverse will be : "<<rev;
  return 0;
}
