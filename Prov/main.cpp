//Edvin �keson, Uppgift 1

#include <iostream>


using namespace std;
int main() 
{
  setlocale(LC_ALL, "swedish");
  
  char gemen;							//gemen bokstav
	
    cout << "Skriv in en gemen bokstav: " << endl;		
    cin >> gemen;						//gemena bokstaven skrivs in
  
  char versal = gemen - 32;					//den korresponderande versala bokstaven
								//�r alltid 32 mindre enligt unicode-tabellen
															
    cout << "Motsvarande versal �r: " << versal << endl;
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
 return 0; 
  
}
