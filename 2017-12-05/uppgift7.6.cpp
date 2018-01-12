#include <iostream>
#include <string>

using namespace std; 
int main()
{

  
  
  int tal = 2;
  int gissning;
  
  cout << "Gissa vilket tal mellan 1 och 3 jag tänker på: " << endl;
  cin >> gissning;
  
  if (gissning == tal)
  {
      cout << "Du gissade rätt" << endl;
  }
  else 
  {
      cout << "Du gissade fel" << endl;
  
  cout << "Gissa igen: " << endl;
  cin >> gissning;
  
	if (gissning == tal)
	{
	    cout << "Du gissade rätt på andra försöket" << endl;
	}
	else 
	{
	 cout <<  "Du gissade fel igen, talet var 2 " << endl;
	}
  }
    
    
    
    
    
    
  
  
  
  
  
  
  
  
  
  
  
  
 return 0; 
} 
 
