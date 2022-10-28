#include<iostream>
#include<ctype.h>
using namespace std;

int main()
{
  char kata[100];
  int i, jumlah=0;

  cout << "Masukan Kalimat : ";
  cin.getline(kata, sizeof(kata));
  cout<<" "<<endl;
  cout << "kata yang anda masukkan adalah: "<< kata <<"\n";

  for(i=0; kata[i]; i++)
  {
    if(isspace (kata[i]) || ispunct (kata[i]))
    {
      jumlah++;
      }
    }
  cout << "dalam kalimat terdapat  " << jumlah +1 <<" kata";

  return 0;
  }