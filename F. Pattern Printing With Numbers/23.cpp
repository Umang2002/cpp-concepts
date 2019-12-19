#include<iostream>
const int MAX = 15;
using namespace std;

int main()
{
  int count;
  int a[MAX][MAX] ={};
  int i=0,j=0;

  cout<<"Enter number : ";
  cin>>count;

  while(i<=count)
  {
      j = 0;
      while(j<i)
      {
          if(j==0 || i==j)
          {
              a[i][j]=1;
          }
          else
          {
              a[i][j]=a[i-1][j-1]+a[i-1][j];
          }
          cout<<a[i][j]<<" ";
          j++;
      }
      cout<<endl<<"";
      i++;
  }
  return 0;
}
