#include <iostream>
using namespace std;
int main()
{
  int a=0, b=0;
  cout<<"Enter a two number : ";
  cin>>a>>b;

  int i = a<b ? a : b;  //Getting smaller number.

  while(i>0)
  {
    if(b%i==0 && a%i==0)
    {
      cout<<"Greteast Common Divisor of "<<a<<" and "<<b<<" is : "<<i<<endl;
      break;
    }
    i--;
  }
  return 0;
}
