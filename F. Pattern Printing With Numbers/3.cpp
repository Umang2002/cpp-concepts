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
    j = count-i+1;
    while(j>=1)
    {
      cout<<j<<" ";
      j--;
    }
    cout<<endl;
    i++;
  }

  return 0;
}
