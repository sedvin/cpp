
							 // inkluderar "saker som finns i biblioteket iostream" bland annat utskrift p� sk�rmen.
#include <iostream>

							// I en namnrymd "namespace" ing�r olika bibliotek. Alla ing�ende bibliotek har olika namn. 
using namespace std;

int main()						// H�r b�rjar programmet k�ra.
{
 /*
  * datatyp variabelnamn;
  */
 int tal1; 						// Plats f�r en int allokeras (bokas).
 int tal2;
 
  //antal = 4; 						// Antal tilldelas v�rdet 4.
  
  
							//Inmatning fr�n tangentbordet.
  cout << "Mata in ett heltal 1: ";
  cin >> tal1;
    cout << "Mata in ett heltal 2: ";
  cin >> tal2;
  int summa = tal1+tal2;
  /* int summa;
   * summa = tal1+tal2
   */
  
  cout << "Summan av talen blir " << summa << endl;
  cout << "Summan av talen blir " << tal1+tal2 << endl;
  /*
   * tal = tal+1;
   */
  
      return 0;						// H�r avslutas programmet.
  }
