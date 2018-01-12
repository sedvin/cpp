#include <iostream>
#include <iomanip>
#include <string>

using namespace std;
int main()
{
  
  int tal = 1;
  switch (tal) //heltal, (char, int)
  {
    case 1:
    cout << "Tal är 1" << endl;
    break;
    
      case 2:
      cout << "Tal är 2" << endl;
      break;
      
        case 3:
	cout << "Tal är 3" << endl;
	break;
	
	  default:
	  cout << "Tal är något annat" << endl;    
    
  }
  
  
  
  
  
  /*
  if (tal == 1) 			//Något som går att bestämma som sant eller falskt. 
  {
    cout << "Tal är 1" << endl;
  }
  else if (tal == 2)
  {
    cout << "Tal är 2" << endl;
  }
  else if (tal == 3)
  {
    cout << "Tal är 3" << endl;
  }
  else
  {
    cout << "Tal är något annat" << endl;
  }
  */
  
  return 0;
}
