// Multiple Inheritance. B,C --> A.
#include <iostream>
using namespace std;

class B // base class
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

class C // base class
{
  public:
    C()
    {
      cout << "This is C class constructor" << endl;
    }
    ~C()
    {
      cout << "This is C class destructor" << endl;
    }
};

class A : public B, public C
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

int main()
{
  A obj;
  return 0;
}
