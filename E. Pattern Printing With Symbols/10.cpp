/*
Print the following picture:
        *
      * * *
    * * * * *
  * * * * * * *
* * * * * * * * *
  * * * * * * *
    * * * * *
      * * *
        *
*/
#include<iostream>
using namespace std;
int main()
{
	int i,j;
 	for (i=1;i<=5;i++)
	{
 		for (j=5;j>i;j--)
   		cout<<"  ";
	  for (j=1;j<=i*2-1;j++)
   		cout<<"* ";
   	cout<<endl;
  }
  
  for (i=4;i>=1;i--)
	{
   	for (j=i;j<=4;j++)
   		cout<<"  ";
	  for (j=i*2-1;j>=1;j--)
   		cout<<"* ";
   	cout<<endl;
  }
	return 0;
}
