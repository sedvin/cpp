#include <string>
#include <iostream>
#include <iomanip>


using namespace std;

int main()		
{
  // Ett tal mellan 2 alternativ, selektion i ett arktivitetsdiagram. Något som entydlingt är sant eller falskt. 
  
  cout << "Mata in ett heltal: " << endl;
  int i;
  
  cin >> i;
  
  if (i >= 10) // .. om inte sant
  
  {
    cout << "Du matade in ett tal, större eller lika med 10." << endl;
  }
  else // .. utförs detta i stället
  {
    cout << "Du matade in ett tal, mindre än 10" << endl;
  }
  
  
  
  
  
  
  
    return 0;				
}
