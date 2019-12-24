//4. Program to Insert an Element in a Specified Position in a given Array.

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

  cout<<"\nEnter a index position in array : ";
  cin>>pos;

  if(pos<size)
  {
    for(int i=size+1;i>pos;i--)
    {
        num[i] = num[i-1];
    }
    num[pos] = inputNum;

    //Print
    cout<<"\nNew inserted array is : "<<endl;
    for(int i=0;i<size+1;i++)
      cout<<num[i]<<" ";

  }
  else
  {
      cout<<"\nYou entered wrong index!!! "<<endl;
  }



  return 0;
}
