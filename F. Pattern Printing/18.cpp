#include<iostream>
using namespace std;

int main()
{
  int i=1,j=1,m=1;
  int count;

  cout<<"Enter number : ";
  cin>>count;
  cout<<endl;

  while(i<=count)
  {
    j = 1;
    while(j<=count-i+1)
    {
      cout<<m<<" ";
      m++;
      j++;
    }
    cout<<endl;
    i++;
  }
  return 0;
}
