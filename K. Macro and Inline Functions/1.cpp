//Problems with using macro
#include <iostream>
#define SQUARE(a) (a)*(a)
using namespace std;

int main()
{
  cout<<SQUARE(4)<<endl;

  int x = 3;
  cout<<SQUARE(++x)<<endl;
  return 0;
}
