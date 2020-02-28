//Addition of two complex numbers. Using friend class.
#include<iostream>
using namespace std;

class complex2;
class complex1
{
  int r;
  int i;
  public:
    void input();
    void addition(complex2 &);
    void output();
};

class complex2
{
  int r;
  int i;
  public:
    void input();
    friend complex1;
    void output();
};

void complex1::input()
{
  cout<<"Enter real part: ";
  cin>>r;
  cout<<"Enter imaginary part: ";
  cin>>i;
  cout<<endl;
}

void complex2::input()
{
  cout<<"Enter real part: ";
  cin>>r;
  cout<<"Enter imaginary part: ";
  cin>>i;
  cout<<endl;
}

void complex1::addition(complex2 &c2)
{
  r = r + c2.r;
  i = i + c2.i;
}

void complex1::output()
{
  cout<<r<<" + "<<i<<"i"<<endl;
}

void complex2::output()
{
  cout<<r<<" + "<<i<<"i"<<endl;
}

int main()
{
  complex1 c1;
  complex2 c2;

  cout<<"Enter 1st complex number"<<endl;
  c1.input();

  cout<<"Enter 2nd complex number"<<endl;
  c2.input();

  cout<<"Addtion of complex number is: ";
  c1.addition(c2);
  c1.output();
  return 0;
}
