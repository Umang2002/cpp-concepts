#include <iostream>
using namespace std;

void swap(int &x, int &y)
{
  int temp = x;
  x = y;
  y = temp;
}

int main()
{
  int a = 0,b = 0;
  cout<<"Example of Call By Reference."<<endl;
  cout<<"\nEnter value of A : ";
  cin>>a;
  cout<<"Enter value of B : ";
  cin>>b;

  swap(a,b);

  cout<<"\nValue of A : "<<a<<endl;
  cout<<"Value of B : "<<b<<endl;
  return 0;
}
