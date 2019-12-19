#include <iostream>
using namespace std;
int main()
{
  int num=0,f=0,l=0,i=1;
  cout<<"Enter a number : ";
  cin>>num;
  f=num;
  while(f>10)
  {
    f /= 10;
    i++;
  }
  l = num%10;
  num = num/10;
  num = (num*10)+f;
  while(i>1)
  {
    f *= 10;
    l *= 10;
    i--;
  }
  num -= f;
  num += l;
  cout<<num;
  return 0;
}
