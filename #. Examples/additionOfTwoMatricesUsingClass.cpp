// Addition of two matrices using class.
#include<iostream>
using namespace std;

class matrix
{
  int row, col;
  int mat[5][5];
  public:
    void input(int, int);
    void show();
    void add(matrix&, matrix&);
};

void matrix::input(int r, int c)
{
  row = r;
  col = c;
  for(int i = 0; i < row; i++)
  {
    for(int j = 0; j < col; j++)
    {
      cin>>mat[i][j];
    }
  }
}

void matrix::show()
{
  for(int i = 0; i < row; i++)
  {
    for(int j = 0; j < col; j++)
    {
      cout<<mat[i][j]<<" ";
    }
    cout<<endl;
  }
}

void matrix::add(matrix &m1, matrix &m2)
{
  row = m1.row;
  col = m1.col;

  for(int i = 0; i < row; i++)
  {
    for(int j = 0; j < col; j++)
    {
      mat[i][j] = m1.mat[i][j] + m2.mat[i][j];
    }
  }
}

int main()
{
  matrix a, b, c;

  a.input(2, 2);
  a.show();

  b.input(2, 2);
  b.show();
  
  c.add(a, b);
  c.show();
  return 0;
}
