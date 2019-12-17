#include<iostream>
using namespace std;

int main()
{
  int i=1,j=1,m=1;
  int count;

  cout<<"Enter number : ";
  cin>>count;
  cout<<endl;

  while(i<=(2*count)-1)
  {
    j = 1;
    while(j<=2)
    {
      if(!(j==2 && (i==1 || i==(count*2)-1)))
      {
        cout<<((i <= count) ? i : (2*count)-i )<<" ";
      }
      j++;
    }
    cout<<endl;
    i++;
  }
  return 0;
}
