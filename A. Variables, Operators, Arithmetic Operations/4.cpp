//4) Write a program to get the input of total selling of a salesman and calculate 25% commission on selling.

#include <iostream>
using namespace std;
int main()
{
  float x;
  cout<<"Enter your total selling : ";
  cin>>x;
  cout<<"The commision on "<<x<<" is : "<<x*25/100<<endl;
  return 0;
}
