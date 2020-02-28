//Addition of two complex numbers. Using operator overloading.
#include<iostream>
using namespace std;

class complex
{
  int r;
  int i;
  public:
    complex(int r_ = 0, int i_ =0)  {r = r_;   i = i_;}  //Constructor
    void input();
    complex operator+(complex &); //Operator overloading
    void output();
};

void complex::input()
{
  cout<<"Enter real part: ";
  cin>>r;
  cout<<"Enter imaginary part: ";
  cin>>i;
  cout<<endl;
}

complex complex::operator+(complex &a)
{
  complex c;
  c.r = r + a.r;
  c.i = i + a.i;
  return c;
}

void complex::output()
{
  cout<<r<<" + "<<i<<"i"<<endl;
}

int main()
{
  complex c1, c2, c3;

  cout<<"Enter 1st complex number"<<endl;
  c1.input();

  cout<<"Enter 2nd complex number"<<endl;
  c2.input();

  cout<<"Addtion of complex number is: ";
  c3 = c1 + c2;
  c3.output();
  return 0;
}
