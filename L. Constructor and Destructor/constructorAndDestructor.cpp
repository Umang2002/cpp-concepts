// Constructor, Copy Constructor, Destructor.

#include <iostream>
using namespace std;

class Student
{
	int cat1, cat2;
	float average;
	public:
		Student(int = 0, int = 0); //Constructor
		Student(Student &); //Copy Constructor
		void calculate();
		void display();
		~Student(); //Destructor
};

Student::Student(int c1, int c2)
{
	cat1 = c1;
	cat2 = c2;
}

Student::Student(Student &obj)
{
	cat1 = obj.cat1;
	cat2 = obj.cat2;
}

void Student::display()
{
	cout<<"CAT-1 Mark: "<<cat1<<endl;
	cout<<"CAT-2 Mark: "<<cat2<<endl;
	cout<<"The average mark is: "<<average<<endl;
}

void Student::calculate()
{
	average = (cat1 + cat2)/2.0;
}

Student::~Student()
{
	cout<<"";
}

int main()
{
	Student ob1(50, 20);
	Student ob2(ob1); //Calling copy constructor
	ob2.calculate();
	ob2.display();
	return 0;
}
