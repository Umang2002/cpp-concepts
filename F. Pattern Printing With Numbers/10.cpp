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
    if(i%2==0) //Even Line //Decrese numbers
    {
        j = count - i + 1;
        while(j>=1)
        {
          cout<<j<<" ";
          j--;
        }
    }
    else //Odd Line //Increse numbers
    {
        j = 1;
        while(j<=count+1-i)
        {
          cout<<j<<" ";
          j++;
        }
    }
    cout<<endl;
    i++;
  }

  return 0;
}
