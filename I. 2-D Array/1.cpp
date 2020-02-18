//1. Write a program for addition of two Matrices.

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

void addMatrix(int mat_1[mSize][mSize], int mat_2[mSize][mSize], int mat_r[mSize][mSize]) {
  for (int i = 0; i < mSize; i++) {
    for (int j = 0; j < mSize; j++) {
      mat_r[i][j] = mat_1[i][j] + mat_2[i][j];
    }
  }
}

void printMatrix(int mat[mSize][mSize]) {
  for (int i = 0; i < mSize; i++) {
    for (int j = 0; j < mSize; j++) {
      cout<<mat[i][j]<<" ";
    }
    cout<<endl;
  }
}

int main()
{
  int matrix_A[mSize][mSize];
  int matrix_B[mSize][mSize];
  int matrix_Result[mSize][mSize];

  inputMatrix(matrix_A);
  cout<<"\nYour First matrix is : "<<endl;
  printMatrix(matrix_A);

  inputMatrix(matrix_B);
  cout<<"\nYour Second matrix is : "<<endl;
  printMatrix(matrix_B);

  addMatrix(matrix_A, matrix_B, matrix_Result);
  cout<<"\nYour Addition of both matrix is : "<<endl;
  printMatrix(matrix_Result);
  return 0;
}
