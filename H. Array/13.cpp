//13. Program to reverse an array.

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
  int temp = num[size-1]; //Store last element in temp.
  for(int i=size-1;i>0;i--)
  {
      num
  }

  //Print
  cout<<"\nArray in decresing order is : "<<endl;
  for(int i=0;i<size;i++)
    cout<<num[i]<<" ";


  return 0;
}
