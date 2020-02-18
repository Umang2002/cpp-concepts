//4. Write a program to accept a matrix and check whether it is a sparse matrix.

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

void printMatrix(int mat[mSize][mSize]) {
  for (int i = 0; i < mSize; i++) {
    for (int j = 0; j < mSize; j++) {
      cout<<mat[i][j]<<" ";
    }
    cout<<endl;
  }
}

void CheckSparseMatrix(int mat[mSize][mSize]) {
  int sparseCount = 0;
  for (int i = 0; i < mSize; i++) {
    for (int j = 0; j < mSize; j++) {
      if (mat[i][j] != 0){
        sparseCount++;
      }
    }
    cout<<endl;
  }

  if (sparseCount < (mSize*mSize)/2){
    cout<<"Your matrix is a sparse matrix."<<endl;
  } else {
    cout<<"Your matrix is not a sparse matrix."<<endl;
  }
}

int main()
{
  int matrix_A[mSize][mSize];

  inputMatrix(matrix_A);
  printMatrix(matrix_A);
  CheckSparseMatrix(matrix_A);
  return 0;
}
