#include <iostream>
using namespace std;

void setArray(int *array, int size)
{
  for(int *i = array; i < array + size; i++)
  {
    cin>>*i;
  }
}

void swap(int *a, int *b)
{
  int temp = *a;
  *a = *b;
  *b = temp;
}

void reverse(int *array, int size)
{
  int *start = array;
  int *end = array + size - 1;
  while (start < end) {
    swap(start, end);
    start++;
    end--;
  }
}

// Function to print the array
void print(int *array, int size)
{
  for (int *i = array; i < array + size; i++)
  {
    cout<<*i<<" ";
  }
}

int main()
{
  int size;

  cout<<"Enter size of a array: ";
  cin>>size;

  int array[size];

  cout<<"Enter "<<size<<" elements: ";
  setArray(array, size);

  cout<<"Original array is: ";
  print(array, size);

  cout<<"\nReverse array is: ";
  reverse(array, size);
  print(array, size);

  return 0;
}
