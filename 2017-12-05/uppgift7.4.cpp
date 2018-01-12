#include <iostream>
#include <string>

using namespace std; 
int main()
{
  
  cout << "Välj ditt fordon, bil= b /cykel= c /buss= l /tåg= t: " << endl;
  char fordon;
  cin >> fordon;
  switch (fordon)
  {
    case 'c':
      cout << "Du valde cykel, bra val. " << endl;
	break;
    case 'b':
      cout << "Du valde bil. " << endl;
	break;
    case 't': 
      cout << "Du valde tåg. " << endl;
	break;
    case 'l': 
      cout << "Du valde buss. " << endl;
	break;
  }
  
  
  
  
  
  
  
 return 0; 
} 
