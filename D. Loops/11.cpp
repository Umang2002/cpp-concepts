#include <iostream>
using namespace std;

int main()
{
  int f1=0, f2=1, till=0;

  cout<<"Enter order of series : ";
  cin>>till;

  cout<<f2<<" ";

  while(till>0)
  {
    f1 += f2;
    cout<<f1<<" ";

    f1 += f2;
    f2 = f1 - f2;
    f1 -= f2;

    till--;
  }
  return 0;
}
