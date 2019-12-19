#include <iostream>
using namespace std;
int main()
{
  int num=0;
  cout<<"Enter a number : ";
  cin>>num;
  int i = num/2;

  cout<<"Factorial of "<<num<<" are : "<<num<<" ";
  while(i>0)
  {
    if(num%i==0)
    {
      cout<<i<<" ";
    }
    i--;
  }

  return 0;
}
