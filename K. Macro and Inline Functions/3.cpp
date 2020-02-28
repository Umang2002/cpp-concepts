//Using inline
#include<iostream>
using namespace std;
inline int square(int num)
{
	return (num*num);
}
int main()
{
  cout<<square(4)<<endl;
  int x = 3;
  cout<<square(++x)<<endl;
  return 0;
}
