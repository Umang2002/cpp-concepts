//1. Program to Calculate Sum of all +ve numbers and -ve numbers.
//Also find the average of all the elements.

#include <iostream>
using namespace std;

int main()
{
  int pSum = 0;
  int nSum = 0;
  int size = 0;
  //Enter size of Array.
  cout<<"Enter size of Array : ";
  cin>>size;

  int num[size] = {};
  //Get Numbers
  for(int i=0;i<size;i++)
    cin>>num[i];

  //Calculate
  for(int i=0;i<size;i++)
  {
    if(num[i]>0)
      pSum += num[i];
    else
      nSum += num[i];
  }

  //Print
  cout<<"\nPositive sum is : "<<pSum<<endl;
  cout<<"Negative sum is : "<<nSum<<endl;
  cout<<"Average is : "<<(pSum+nSum)/(float)(size)<<endl;
}
