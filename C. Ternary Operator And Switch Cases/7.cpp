#include <iostream>
using namespace std;
int main()
{
  char c;
  cout<<"Enter Character : ";
  cin>>c;

  switch(c)
  {
    case 'A': case 'a':
    case 'E': case 'e':
    case 'I': case 'i':
    case 'O': case 'o':
    case 'U': case 'u': cout<<"Vowel."<<endl;
      break;
    default: cout<<"Consonant."<<endl;
      break;
  }
  return 0;
}
