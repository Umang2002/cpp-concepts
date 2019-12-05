//3) Write a program to input a three digits number. Then find the sum of the first and last digits.

#include <iostream>
using namespace std;
int main()
{
  int x;
  cout<<"Enter a three digits number : ";
  cin>>x;
  cout<<"The sum of "<<x/100<<" and "<<x%10<<" is : "<<((x/100)+(x%10))<<endl;
  return 0;
}
