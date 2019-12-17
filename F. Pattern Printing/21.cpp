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
    while(j<=count)
    {
      if(i==1 || i==count)
      {
        cout<<1<<" ";
      }
      else
      {
        if(j<=2)
        {
          cout<<1<<" ";
        }
      }

      j++;
    }
    cout<<endl;
    i++;
  }
  return 0;
}
