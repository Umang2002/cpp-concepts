// Virtual/Hybrid Inheritance. A --> B,C --> D.
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

class B : public virtual A
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

class C : public virtual A
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

class D : public B, public C
{
  public:
    D()
    {
      cout << "This is D class constructor" << endl;
    }
    ~D()
    {
      cout << "This is D class destructor" << endl;
    }
};


int main()
{
  D obj;
  return 0;
}
