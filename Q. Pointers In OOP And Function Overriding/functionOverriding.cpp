#include<iostream>
using namespace std;

class A
{
  int a = 1;
  public:
    virtual void display()
    {
      cout<<"I'm in class A, a = "<<a<<endl;
    }
};

class B: public A
{
  int b = 2;
  public:
    void display()
    {
      cout<<"I'm in class B, b = "<<b<<endl;
    }
};

class C
{
  int c = 2;
  public:
    void display()
    {
      cout<<"I'm in class C, c = "<<c<<endl;
    }
};

int main()
{
  A ob1, *p;
  B ob2;
  C ob3;

  p = &ob1;
  p -> display();

  p = &ob2;
  p -> display(); //We used virtual keyword in class A to execute method from class B.

//  p = &ob3; //This will show error. Because class C is not derived class of A.
//  p -> display();
  return 0;
}
