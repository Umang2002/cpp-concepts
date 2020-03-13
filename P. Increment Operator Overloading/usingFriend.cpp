#include <iostream>
using namespace std;

class number
{
  private:
    int x, y, z;
  public:
    number(int, int, int);
    void display();
    friend void operator ++(number &);  //pre
    friend void operator ++(number &, int); //post
};

number::number(int a = 0, int b = 0, int c = 0)
{
  x = a;
  y = b;
  z = c;
}

void number::display()
{
  cout<<"X = "<<x<<endl;
  cout<<"Y = "<<y<<endl;
  cout<<"Z = "<<z<<endl;
}

void operator ++(number &obj)
{
  ++obj.x;
  ++obj.y;
  ++obj.z;
}


void operator ++(number &obj, int)
{
  obj.x++;
  obj.y++;
  obj.z++;
}

int main()
{
  number num(1, 2, 3);
  cout<<"Before increment :"<<endl;
  num.display();

  cout<<"\nAfter pre-increment :"<<endl;
  ++num;
  num.display();

  cout<<"\nAfter post-increment :"<<endl;
  num++;
  num.display();
  return 0;
}
