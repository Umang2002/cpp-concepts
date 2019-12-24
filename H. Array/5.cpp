//5. Program to Insert an Element at the end of the given Array.

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

  int num[size+1] = {0};
  //Get Numbers
  for(int i=0;i<size;i++)
    cin>>num[i];

  //Calculate
  cout<<"Enter a number you want to insert : ";
  cin>>inputNum;

  num[size] = inputNum;

  //Print
  cout<<"\nNew inserted array is : "<<endl;
  for(int i=0;i<size+1;i++)
    cout<<num[i]<<" ";

  return 0;
}
