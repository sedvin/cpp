 
#include <iostream>
#include <string>
using namespace std;
int main()
{
  int passagerare, val;
  val= 0;
  passagerare = 0;  
  
  
  while(val < 5)
  {
  cout << "1. Nollställ antalet passagerare." << "\n"  << "2. Öka antalet passagerare med en." << endl; 
  cout << "3. Minska antalet passagerare med en." << "\n" << "4. Skriv ut antalet passagerare." << endl;
  cout << ">4. Programmet avslutas." << endl; 
  cin >> val;
  cout << endl;
  
  switch(val)
  {
    case 1:
      passagerare = 0;
      break;
      
    case 2:
      passagerare++; 
      break;
	
    case 3:
      passagerare--;
      break;
      
    case 4:
      cout << "Antalet passagerare är: " << passagerare << endl << endl;
      break;
      
    default: 
      cout << "Programmet avslutas" << endl;
      return 0;
    
    
    
    
    
  }
  }
  

  
  
 return 0; 
}
 
 
 
  
