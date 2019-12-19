#include <iostream>
using namespace std;
int main()
{
  int num=0,fact=1;
  cout<<"Enter a number : ";
  cin>>num;

  while(num>1)
  {
    fact *= num;
    num -= 1;
  }
  cout<<"Factorial is : "<<fact<<endl;

  return 0;
}
