#include <string>
#include <iostream>
#include <iomanip>


using namespace std;

int main()		
{
  // Ett tal mellan 2 alternativ, selektion i ett arktivitetsdiagram. N�got som entydlingt �r sant eller falskt. 
  
  cout << "Mata in ett heltal: " << endl;
  int i;
  
  cin >> i;
  
  if (i >= 10) // .. om inte sant
  
  {
    cout << "Du matade in ett tal, st�rre eller lika med 10." << endl;
  }
  else // .. utf�rs detta i st�llet
  {
    cout << "Du matade in ett tal, mindre �n 10" << endl;
  }
  
  
  
  
  
  
  
    return 0;				
}
