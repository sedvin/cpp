//Edvin �keson, uppgift 4

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;
int main() 
{
  setlocale(LC_ALL, "swedish");

    int tim, min, sek;							//Timmar, minuter och sekunder
  
  cout << "Skriv in timmar, minuter och sekunder. Anv�nd heltal: " << endl;	
  cin >> tim >> min >> sek;						//antalet timmar, minuter och sekunder matas in
  
      min = min + sek/60;						//minuter ber�knas med sekunder
      sek = sek%60;							//sekunder ber�knas med en rest
      tim = tim + min/60;						//timmar ber�knas med minuter
      min = min%60;							//de kvarst�ende minuterna ber�knas med en rest
  
  cout << "Timmar: " << tim << endl <<"Minuter: " << min << endl << "Sekunder: " << sek << endl;
  
  
  
  
  
  
  
  
  
    
 return 0; 
  
}
 
 
 
