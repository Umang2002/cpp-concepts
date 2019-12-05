//1) Write a program to accept any character from the user and display its ASCII value.

#include <iostream>
using namespace std;
int main()
{
  char x;
  cout<<"Enter a character : ";
  cin>>x;
  cout<<"The ASCII value of "<<x<<" is : "<<(int)x<<endl;
  return 0;
}
