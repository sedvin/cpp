
// inkluderar "saker som finns i biblioteket iostream" bland annat utskrift på skärmen.
#include <iostream>

// I en namnrymd "namespace" ingår olika bibliotek. Alla ingående bibliotek har olika namn. 
using namespace std;

int main()		// Här börjar programmet köra.
{
  /*
   cout = "datorns standardutenhet, definerat i operativsystemet (skärmen) 
   << är utmatningsoperatorn. (matar ut till skärmen)
  */
    cout << "\"Mitt första program\"" << endl;	// Här skrivs en text till skärmen.
    cout << "Hola" << endl;
    cout << "Kod på två rader ";
    cout << "men utskrift på en rad " << endl;
    cout << endl; 
    cout << "en rad kod," << endl << "utskrift på två";
    cout << endl;
    
    return 0;				// Här avslutas programmet.
}
