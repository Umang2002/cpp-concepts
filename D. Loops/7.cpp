#include <iostream>
using namespace std;
int main()
{
  int num=0, temp=0;
  cout<<"Enter a number : ";
  cin>>num;

  while(num!= 0)
  {
      temp = (temp * 10) + (num % 10);
      num /= 10;
  }

  while(temp!=0)
  {
    switch(temp%10)
    {
      case 0: cout<<"zero ";
      break;
      case 1: cout<<"one ";
      break;
      case 2: cout<<"two ";
      break;
      case 3: cout<<"three ";
      break;
      case 4: cout<<"four ";
      break;
      case 5: cout<<"five ";
      break;
      case 6: cout<<"six ";
      break;
      case 7: cout<<"seven ";
      break;
      case 8: cout<<"eight ";
      break;
      case 9: cout<<"nine ";
      break;
    }
    temp /= 10;
  }

  return 0;
}
