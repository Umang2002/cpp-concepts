#include <iostream>
using namespace std;
int main()
{
  int x;
  cout<<"Enter the Amount : ";
  cin>>x;

  cout<<" 500-"<<x/500<<endl;
  x = x%500;

  cout<<" 100-"<<x/100<<endl;
  x = x%100;

  cout<<" 50-"<<x/50<<endl;
  x = x%50;

  cout<<" 20-"<<x/20<<endl;
  x = x%20;

  cout<<" 10-"<<x/10<<endl;
  x = x%10;

  cout<<" 5-"<<x/5<<endl;
  x = x%5;

  cout<<" 2-"<<x/2<<endl;
  x = x%2;

  cout<<" 1-"<<x<<endl;

  return 0;
}
