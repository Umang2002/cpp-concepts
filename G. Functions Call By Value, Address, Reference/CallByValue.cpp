#include <iostream>
using namespace std;

void swap(int x, int y)
{
  int temp = x;
  x = y;
  y = temp;

  cout<<"\nValue of A : "<<x<<endl;
  cout<<"Value of B : "<<y<<endl;
}

int main()
{
  int a = 0,b = 0;
  cout<<"Example of Call By Value."<<endl;
  cout<<"\nEnter value of A : ";
  cin>>a;
  cout<<"Enter value of B : ";
  cin>>b;
  swap(a,b);
  return 0;
}
