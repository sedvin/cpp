#include <iostream>
#include <string>
using namespace std;
int main()
{
  int mangd;
  int falt[200];


  do
  {
      cout << "Mata in heltal, 48-57, 65-90, och 97-122 är tillåtna. " << endl;	
      cout << "Hur många heltal vill du mata in?" << endl;
      cin >> mangd;									//matar in mängden tal som användaren vill skriva in.
    
      
	    if(mangd > 200 || mangd < 2)						//mängden måste vara mellan 2 och 200;	
	    {
	    cout << "Du kan bara mata in värden mellan 2 och 200" << endl;
	    }
	    
	    
  } while (mangd > 200 || mangd < 2);							// Skriver bara do satsen 1 gång om det inte är en felinmatning
  
    
  for(int n = 1; n <= mangd ; n++)							//Inmatning i fältet så många gånger som användaren valde.
  {
   cout << "Mata in tal " << n << ':' << ' ';
   cin >> falt[n];
    
	      if(falt[n] < 48 || falt[n] > 122 || (falt[n] > 57 && falt[n] < 65) || (falt[n] > 90 && falt[n] < 97))	
	      {
	      cout << "Felinmatning" << endl; 						//Felinmatning om talet inte är innom ramarna av instruktionen.
	      n--;									//Vid felinmatning skriver man in talet igen på samma fältplats.
	      }
      
  }
  

  cout << "Motsvarande tecken är: ";	
  
      for(int n = 1; n <= mangd ; n++)							//Omvandling och utskrift av de inmatade talen till Unicode tecken.
	{
	  cout << (char)falt[n] << ' ';
   
	}
  
  cout << endl;
 
 
 return 0; 
}
 
  
 
 
 
