#include <iostream>
using namespace std;

class number
{
  private:
    int x, y, z;
  public:
    number(int, int, int);
    void display();
    friend number operator ++(number &);  //pre
    friend number operator ++(number &, int); //post
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

number operator ++(number &obj)
{
  number temp;
  temp.x = ++obj.x;
  temp.y = ++obj.y;
  temp.z = ++obj.z;
  return temp;
}


number operator ++(number &obj, int)
{
  number temp;
  temp.x = obj.x++;
  temp.y = obj.y++;
  temp.z = obj.z++;
  return temp;
}

int main()
{
  number a(1, 2, 3);
  number b;

  cout<<"Before increment :"<<endl;
  cout<<"OBJ 1: "<<endl;
  a.display();
  cout<<"OBJ 2: "<<endl;
  b.display();

  cout<<"\nAfter pre-increment :"<<endl;
  b = ++a;
  cout<<"OBJ 1: "<<endl;
  a.display();
  cout<<"OBJ 2: "<<endl;
  b.display();

  cout<<"\nAfter post-increment :"<<endl;
  b = a++;
  cout<<"OBJ 1: "<<endl;
  a.display();
  cout<<"OBJ 2: "<<endl;
  b.display();
  return 0;
}
