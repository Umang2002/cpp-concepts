//2. Program to Find the Largest Number in an Array.

#include <iostream>
using namespace std;

int main()
{
  int largest = 0;
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
    if(num[i]>largest)
      largest = num[i];
  }

  //Print
  cout<<"\nLargest number is : "<<largest<<endl;
}
