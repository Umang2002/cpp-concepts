//2) Write a program to input any character in capital letter and print in small letter.

#include <iostream>
using namespace std;
int main()
{
  char x;
  cout<<"Enter a character : ";
  cin>>x;
  cout<<"The lowercase of "<<x<<" is : "<<(char)((int)x+32)<<endl;
  return 0;
}
