							 // inkluderar "saker som finns i biblioteket iostream" bland annat utskrift på skärmen.
#include <iostream>

							// I en namnrymd "namespace" ingår olika bibliotek. Alla ingående bibliotek har olika namn. 
using namespace std;

int main()						// Här börjar programmet köra.
{
 /*
  * datatyp variabelnamn;
  */
 int tal1;						// Plats för en int allokeras (bokas)
 int tal2;
 int tal3;
  //antal = 4; 						// Antal tilldelas värdet 4.
  
  
							//Inmatning från tangentbordet.
  cout << "Mata in 3 tal: ";
  cin >> tal1 >> tal2 >> tal3;
  int summa = tal1+tal2-tal3;
  /* int summa;
   * summa = tal1+tal2
   */
  
  cout << "Summan av talen blir " << summa << endl;
  /*
   * tal = tal+1;
   */
  
      return 0;						// Här avslutas programmet.
  } 
 
