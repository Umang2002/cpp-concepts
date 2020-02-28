// Single Inheritance  A --> B
#include <iostream>
using namespace std;

class A // base class
{
  public:
    A()
    {
      cout << "This is  A class constructor" << endl;
    }
    ~A()
    {
      cout << "This is  A class destructor" << endl;
    }
};

class B: public A
{
  public:
    B()
    {
      cout << "This is B class constructor" << endl;
    }
    ~B()
    {
      cout << "This is B class destructor" << endl;
    }
};

int main()
{
  B obj;
  return 0;
}
