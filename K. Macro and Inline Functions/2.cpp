//Problems with using macro
#include<iostream>
#define CUBE(a) a*a*a

using namespace std;

int main()
{
  cout<<CUBE(1+2)<<endl;
  return 0;
}
