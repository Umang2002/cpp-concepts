//9. Program to delete an element of a particular position from an Array.

#include <iostream>
using namespace std;

int main()
{
  int size = 0;
  int pos = 0;
  //Enter size of Array.
  cout<<"Enter size of Array : ";
  cin>>size;

  int num[size+1] = {};
  //Get Numbers
  for(int i=0;i<size;i++)
    cin>>num[i];

  //Calculate
  cout<<"Enter a index position you want to delete : ";
  cin>>pos;

  for(int i=pos;i<size;i++)
  {
      num[i]=num[i+1];
  }

  //Print
  cout<<"\nNew updated array is : "<<endl;
  for(int i=0;i<size;i++)
    cout<<num[i]<<" ";


  return 0;
}
