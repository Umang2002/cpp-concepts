#include<iostream>
using namespace std;

int main()
{
  int i=1,j=1;
  int count;

  cout<<"Enter number : ";
  cin>>count;
  cout<<endl;

  while(i<=count)
  {
    j = 1;
    while(j<=i)
    {
      if(i%2==0)
      {
        cout<<j*2<<" ";
      }
      else
      {
        cout<<1+(2*(j-1))<<" ";
      }
      j++;
    }
    cout<<endl;
    i++;
  }

  return 0;
}
