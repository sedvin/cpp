
// inkluderar "saker som finns i biblioteket iostream" bland annat utskrift p� sk�rmen.
#include <iostream>

// I en namnrymd "namespace" ing�r olika bibliotek. Alla ing�ende bibliotek har olika namn. 
using namespace std;

int main()		// H�r b�rjar programmet k�ra.
{
  /*
   cout = "datorns standardutenhet, definerat i operativsystemet (sk�rmen) 
   << �r utmatningsoperatorn. (matar ut till sk�rmen)
  */
    cout << "\"Mitt f�rsta program\"" << endl;	// H�r skrivs en text till sk�rmen.
    cout << "Hola" << endl;
    cout << "Kod p� tv� rader ";
    cout << "men utskrift p� en rad " << endl;
    cout << endl; 
    cout << "en rad kod," << endl << "utskrift p� tv�";
    cout << endl;
    
    return 0;				// H�r avslutas programmet.
}
