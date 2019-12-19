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
    m = count;
    while(j<=count*2)
    {
      if(j<=count)
      {
        if(j<count-i+2)
        {
          cout<<j<<" ";
        }
        else
        {
          cout<<"*"<<" ";
        }
      }
      else
      {
        if(m<count-i+2)
        {
          cout<<m<<" ";
        }
        else
        {
          cout<<"*"<<" ";
        }
        m--;
      }
      j++;
    }
    cout<<endl;
    i++;
  }
  return 0;
}
