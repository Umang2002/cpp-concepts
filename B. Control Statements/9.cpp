#include <iostream>
using namespace std;
int main()
{
  char x;
  cout<<"Enter the Amount : ";
  cin>>x;

  if((int)x>=65 && (int)x<=90)
  {
    //Capital Letter
    cout<<" Capital Letter"<<endl;
    if(x=='A'||x=='E'||x=='I'||x=='O'||x=='U')
    {
      //Vowel
      cout<<" Vowel"<<endl;
    }else{
      //Consonants
      cout<<" Consonant"<<endl;
    }
  }
  else if((int)x>=97 && (int)x<=122)
  {
    //Small Letter
    cout<<" Small Letter"<<endl;
    if(x=='a'||x=='e'||x=='i'||x=='o'||x=='u')
    {
      //Vowel
      cout<<" Vowel"<<endl;
    }else{
      //Consonants
      cout<<" Consonant"<<endl;
    }
  }
  else if((int)x>=48 && (int)x<=57)
  {
    //Digit
    cout<<" Digit"<<endl;
  }
  else
  {
    //Special Character
    cout<<" Special Character"<<endl;
  }
  return 0;
}
