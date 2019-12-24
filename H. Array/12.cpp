//12. Program to sort an array in descending order.

#include <iostream>
using namespace std;

int main()
{
  int size = 0;
  //Enter size of Array.
  cout<<"Enter size of Array : ";
  cin>>size;

  int num[size] = {};
  //Get Numbers
  for(int i=0;i<size;i++)
    cin>>num[i];

  //Calculate
  for(int i=0;i<size-1;i++)
  {
    for(int j=0;j<size-1;j++)
    {
        if(num[j]<num[j+1])
        {
          int temp = num[j+1];
          num[j+1] = num[j];
          num[j] = temp;
        }
    }
  }

  //Print
  cout<<"\nArray in decresing order is : "<<endl;
  for(int i=0;i<size;i++)
    cout<<num[i]<<" ";


  return 0;
}
