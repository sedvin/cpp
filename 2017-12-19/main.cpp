#include <iostream>
using namespace std;
int main()
{
  char val;
  float summa=0, pris;
  while (val != 'a')
  {
   cout << " *** Meny *** " << endl; 
   cout << " *** Ny kund (n) *** " << endl; 
   cout << " *** Avsluta (a) *** " << endl; 
   cout << " *** Fortsätt mata in varor (f) *** " << endl; 
   cin >> val;
   
   if (val == 'n')
     summa = 0;
   
   else if (val == 'f')
   {
    cout << "Varans pris (kronor) ";
    cin >> pris;
    summa = summa + pris;
    cout << "Du har handlar för " << summa << " kronor" << endl << endl;
     
   }
    
    
  }
  
  
  
  
  
 return 0; 
}
