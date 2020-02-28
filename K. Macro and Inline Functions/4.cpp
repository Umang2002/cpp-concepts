//Using inline
#include<iostream>
using namespace std;
inline int cube(int a)
{
	return a*a*a;
}
int main()
{
  cout<<cube(1+2);
  return 0;
}
