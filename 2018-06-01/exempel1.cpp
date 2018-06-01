// Exempel 1

#include <iostream>
using namespace std;

void meny();
void skrivUtFalt(int falt[], int antal);
int main()
{
  
 meny();

  
  
  
  
  
  
 return 0; 
}
//DEFINiTION, vad funktionen gör
void meny()
{
  int antal;
  int falt[100];
  
  cout << "Du ska mata in ett antal heltal, minst 1 och högst 100, \nhur många tal vill du mata in? "; 
  cin >> antal;
  
  for(int i = 0; i < antal; i++)
  {
   cout << "Mata in tal " << i << endl;
   cin >> falt[i];
    
  }
  
   skrivUtFalt(falt, antal);
  
}


void skrivUtFalt(int falt[], int antal)
{
  cout << "Du matade in";
  for(int i = 0; i < antal; i++)
  {
   cout << ' ' << falt[i]; 
  }
  cout << endl;
  
  
  
  
}




