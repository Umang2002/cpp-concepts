#include <iostream>
using namespace std;
int main()
{
  int num=0,i=0;
  cout<<"Enter a number : ";
  cin>>num;
  while(num!=0)
  {
    num /= 10;
    i++;
  }
  cout<<"Number of digits are : "<<i;
  return 0;
}
