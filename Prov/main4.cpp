//Edvin Åkeson, uppgift 4

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;
int main() 
{
  setlocale(LC_ALL, "swedish");

    int tim, min, sek;							//Timmar, minuter och sekunder
  
  cout << "Skriv in timmar, minuter och sekunder. Använd heltal: " << endl;	
  cin >> tim >> min >> sek;						//antalet timmar, minuter och sekunder matas in
  
      min = min + sek/60;						//minuter beräknas med sekunder
      sek = sek%60;							//sekunder beräknas med en rest
      tim = tim + min/60;						//timmar beräknas med minuter
      min = min%60;							//de kvarstående minuterna beräknas med en rest
  
  cout << "Timmar: " << tim << endl <<"Minuter: " << min << endl << "Sekunder: " << sek << endl;
  
  
  
  
  
  
  
  
  
    
 return 0; 
  
}
 
 
 
