//3. Program to Put Even and Odd Elements of an Array in 2 Separate Arrays.

#include <iostream>
using namespace std;

int main()
{
  int size = 0;
  //Enter size of Array.
  cout<<"Enter size of Array : ";
  cin>>size;

  int num[size] = {};
  int even[size] = {};
  int odd[size] = {};
  //Get Numbers
  for(int i=0;i<size;i++)
    cin>>num[i];

  //Calculate
  int e=0,o=0;
  for(int i=0;i<size;i++)
  {
    if(num[i]%2==0)
    {
      even[e++] = num[i];
    }
    else
    {
      odd[o++] = num[i];
    }
  }

  //Print
  cout<<"\nEven numbers array is : "<<endl;
  for(int i=0;i<e;i++)
    cout<<even[i]<<" ";

  cout<<"\nOdd numbers array is : "<<endl;
  for(int i=0;i<o;i++)
    cout<<odd[i]<<" ";

  return 0;
}
