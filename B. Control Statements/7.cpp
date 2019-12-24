#include <iostream>
using namespace std;
int main()
{
  int x;
  cout<<"Enter year : ";
  cin>>x;
  if((x%4==0) && (x%100!=0))
		cout<<"This is a Leap Year";
	else if((x%100==0) && (x%400==0))
		cout<<"This is a Leap Year";
	else if(x%400==0)
		cout<<"This is a Leap Year";
	else
		cout<<"This is not a Leap Year";
  return 0;
}
