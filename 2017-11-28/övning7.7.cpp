#include <iostream>
#include <iomanip>
#include <string>

using namespace std;
int main()
{
  int behallning = 1000;
  int meny;
  int insattning;
  int uttag;
  cout << "Välkommen till banken." << endl;
  cout << "1. insättning " << endl << "2. uttag " << endl << "3. visa behållning " << endl;
  
  cin >> meny;
  
  switch (meny)
  {
    case 1:
      cout << "Hur mycket vill du sätta in? " << endl;
      cin >> insattning;
      behallning = behallning + insattning;
      break;
    
    case 2:
      cout << "Hur mycket vill du ta ut? " << endl;
      cin >> uttag;
      if (uttag > behallning)
	  {
	    cout << "Du kan inte ta ut så mycket. " << endl;
	  }
	  else
	  {
	    behallning = behallning - uttag;
	  }
	    break;
	    
    default:
      break;
  }   
  
  cout << "Din behållning är: " << behallning << " kr " << endl;
    
    
     cout << "Välkommen till banken." << endl;
  cout << "1. insättning " << endl << "2. uttag " << endl << "3. visa behållning " << endl;
  
  cin >> meny;
  
  switch (meny)
  {
    case 1:
      cout << "Hur mycket vill du sätta in? " << endl;
      cin >> insattning;
      behallning = behallning + insattning;
      break;
    
    case 2:
      cout << "Hur mycket vill du ta ut? " << endl;
      cin >> uttag;
      if (uttag > behallning)
	  {
	    cout << "Du kan inte ta ut så mycket. " << endl;
	  }
	    behallning = behallning - uttag;
	    break;
	    
    default:
      break;
  }   
  
  cout << "Din behållning är: " << behallning << " kr " << endl;
    
    
      cout << "Välkommen till banken." << endl;
  cout << "1. insättning " << endl << "2. uttag " << endl << "3. visa behållning " << endl;
  
  cin >> meny;
  
  switch (meny)
  {
    case 1:
      cout << "Hur mycket vill du sätta in? " << endl;
      cin >> insattning;
      behallning = behallning + insattning;
      break;
    
    case 2:
      cout << "Hur mycket vill du ta ut? " << endl;
      cin >> uttag;
      if (uttag > behallning)
	  {
	    cout << "Du kan inte ta ut så mycket. " << endl;
	  }
	    behallning = behallning - uttag;
	    break;
	    
    default:
      break;
  }   
  
  cout << "Din behållning är: " << behallning << " kr " << endl;
    
    
    

  
  return 0;
}
  
 
 
