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
    while(j<=m)
    {
      cout<<j<<" ";
      j++;
    }
    if(i<=(int)(count/2))
    {
      m += 2;
    }
    else
    {
      m -= 2;
    }
    cout<<endl;
    i++;
  }
  return 0;
}
