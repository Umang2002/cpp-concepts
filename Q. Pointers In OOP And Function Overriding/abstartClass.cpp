#include<iostream>
using namespace std;

class A
{
  int a = 1;
  public:
    virtual void display() = 0; //Abstract class. I can't create abject of this class.// Virtual keyword is nessesary.
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


int main()
{
//A ob1; //This will give error.
  B ob2;
  ob2.display();
  return 0;
}
