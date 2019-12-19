#include <iostream>
using namespace std;
int main()
{
  int x,y;
  char c;
  cout<<"Enter Problem : ";
  cin>>x>>c>>y;

  switch(c)
  {
    case '+': cout<<x<<" "<<c<<" "<<y<<" = "<<x+y<<endl;
      break;
    case '-': cout<<x<<" "<<c<<" "<<y<<" = "<<x-y<<endl;
      break;
    case '*': cout<<x<<" "<<c<<" "<<y<<" = "<<x*y<<endl;
      break;
    case '/': cout<<x<<" "<<c<<" "<<y<<" = "<<x/y<<endl;
      break;
  }

  return 0;
}
