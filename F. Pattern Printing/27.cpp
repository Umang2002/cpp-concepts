#include<iostream>
#include<math.h>
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
      cout<< (i >= j ? i+j-1 : i-j+m)<<" ";
      j++;
    }
    m += 2;
    cout<<endl;
    i++;
  }
  return 0;
}
