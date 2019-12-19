#include <iostream>
using namespace std;
int main()
{
  long int n=0, a=0;
  cout<<"Enter a number : ";
  cin>>n;

  while(n>0)
  {
      if((n%10)>a)
      {
          a = n%10;
      }
      n /= 10;
  }

  cout<<"Largest Digit is : "<<a<<endl;
  return 0;
}
