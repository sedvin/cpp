
							 // inkluderar "saker som finns i biblioteket iostream" bland annat utskrift på skärmen.
#include <iostream>

							// I en namnrymd "namespace" ingår olika bibliotek. Alla ingående bibliotek har olika namn. 
using namespace std;

int main()						// Här börjar programmet köra.
{
 /*
  * datatyp variabelnamn;
  */
 int tal1; 						// Plats för en int allokeras (bokas).
 int tal2;
 
  //antal = 4; 						// Antal tilldelas värdet 4.
  
  
							//Inmatning från tangentbordet.
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
  
      return 0;						// Här avslutas programmet.
  }
