//6. Write a program to print the right diagonals of a matrix.

#include <iostream>
using namespace std;

const int mSize = 3;

void inputMatrix(int mat[mSize][mSize]) {
  cout<<"\nEnter "<<mSize<<"X"<<mSize<<" matrix : "<<endl;
  for (int i = 0; i < mSize; i++) {
    cout<<"Enter "<<i+1<<" row : ";
    for (int j = 0; j < mSize; j++) {
      cin>>mat[i][j];
    }
  }
}

void printRightDiagonal(int mat[mSize][mSize]) {
  for (int i = 0; i < mSize; i++) {
    for (int j = 0; j < mSize; j++) {
      if (){

        cout<<mat[i][j]<<" ";
      } else {
        cout<<"  ";
      }
    }
    cout<<endl;
  }
}


int main()
{
  int matrix_A[mSize][mSize];

  inputMatrix(matrix_A);
  cout<<"\nYour right diagonal is : "<<endl;
  printRightDiagonal(matrix_A);
  return 0;
}
