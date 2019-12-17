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
    while(j<=count+1-i)
    {
      cout<<j<<" ";
      j++;
    }
    cout<<endl;
    i++;
    j=1;
  }

  return 0;
}
