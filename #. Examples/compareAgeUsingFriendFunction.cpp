// Print greater age between two person using friend function.

#include<iostream>
using namespace std;

class Person
{
  int age;
  public:
    Person(int a = 0) { age = a; }
    friend void CompareAge(Person &, Person &);
};

void CompareAge(Person &p1, Person &p2)
{
  if (p1.age != p2.age) {
    int result = p1.age > p2.age ? p1.age : p2.age;
    cout<<"Person with age "<<result<<" is older."<<endl;
  } else {
    cout<<"Same age."<<endl;
  }
}

int main()
{
  Person a(10), b(30);
  Compare(a, b);
  return 0;
}
