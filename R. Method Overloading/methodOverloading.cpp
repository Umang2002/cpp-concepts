#include<iostream>
using namespace std;

class A
{
  int a;
  public:
    A(int x)
    {
      a = x;
    }
};

class B
{
  int b;
  public:
    B(int x)
    {
      b = x;
    }
};

class C
{
  int c;
  public:
    C(int x)
    {
      c = x;
    }
};

class D
{
  int d;
  public:
    D(int x)
    {
      d = x;
    }
};

class E: public A
{
  int e;
  public:
    E(int x, int a):A(a)
    {
      e = x;
    }
};

class F: public E
{
  int f;
  public:
    F(int x, int e, int a):E(e, a)
    {
      f = x;
    }
};

class G: public F, public B, public C, public D
{
  int g;
  public:
    G (int x, int f, int e, int a, int b, int c, int d):F(f, e, a),B(b),C(c),D(d)
    {
      g = x;
    }
};

int main()
{
  G ob(1, 2, 3, 4, 5, 6, 7);
  return 0;
}
