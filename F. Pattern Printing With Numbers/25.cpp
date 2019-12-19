#include<iostream>
#include<math.h>
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
    while(j<=count)
    {
      cout<< (i > j ? i-j : j-i)+1<<" ";
      j++;
    }
    cout<<endl;
    i++;
  }
  return 0;
}
