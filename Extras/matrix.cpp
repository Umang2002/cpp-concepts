#include<iostream>
using namespace std;

int main()
{
  int mat1[3][3]={};
  int mat2[3][3]={};
  int res[3][3]={};

  cout<<"Input Matrix 1 : "<<endl;
  //Getting Input in Mat1
  for(int i=0;i<3;i++)
  {
    cin>>mat1[i][0]>>mat1[i][1]>>mat1[i][2];
  }

  cout<<"\nInput Matrix 2 : "<<endl;
  //Getting Input in Mat2
  for(int i=0;i<3;i++)
  {
    cin>>mat2[i][0]>>mat2[i][1]>>mat2[i][2];
  }

  cout<<"\nMultiply Matrix is : "<<endl;
  //Multiplying Matrices.

  for(int z=0;z<3;z++)
  {
      for(int i=0;i<3;i++)
      {
          for(int j=0;j<3;j++)
          {
              res[z][i] +=  mat1[z][j] * mat2[j][i];
          }
      }
  }

  //Printing Result.

  for(int i=0;i<3;i++)
  {
    for(int j=0;j<3;j++)
    {
       cout<<res[i][j]<<" ";

    }
    cout<<""<<endl;
  }


  return 0;
}
