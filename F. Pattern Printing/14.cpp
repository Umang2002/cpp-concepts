#include<iostream>
using namespace std;

int main()
{
  int i=1,j=1,m=0;
  int count;

  cout<<"Enter number : ";
  cin>>count;
  cout<<endl;

  while(i<=count)
  {
    j = 1;
    m = 0;
    while(j<=i)
    {
        cout<<i+m<<" ";
        m += count - j;
        j++;
    }
    cout<<endl;
    i++;
  }

  return 0;
}
