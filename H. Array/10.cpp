//10. Program to delete the last element from the given Array.

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
  num[size-1] = 0;
  //Print
  cout<<"\nNew updated array is : "<<endl;
  for(int i=0;i<size;i++)
    cout<<num[i]<<" ";


  return 0;
}
