//8. Program to delete a particular element from an Array.

#include <iostream>
using namespace std;

int main()
{
  int size = 0;
  int inputNum = 0;
  int pos = 0;
  //Enter size of Array.
  cout<<"Enter size of Array : ";
  cin>>size;

  int num[size+1] = {};
  //Get Numbers
  for(int i=0;i<size;i++)
    cin>>num[i];

  //Calculate
  cout<<"Enter a number you want to delete : ";
  cin>>inputNum;

  //Search for that element and shift the array up.
  int shift = 0;
  for(int i=0;i<size;i++)
  {
      if(num[i]==inputNum)
      {
          shift = 1;
      }
      if(shift==1)
      {
        num[i]=num[i+1];
      }
  }
  if(shift==0)
  {
    cout<<"\nElement not found!!!"<<endl;
  }else{
    //Print
    cout<<"\nNew updated array is : "<<endl;
    for(int i=0;i<size;i++)
      cout<<num[i]<<" ";
  }

  return 0;
}
