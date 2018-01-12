#include <iostream>
#include <iomanip>
#include <string>

using namespace std;
int main()
{
  int falt[10];
  int counter = 0;
  
  while (counter < 10)				//while-sats. 8.2 sidan 112
  {
   cout << counter << ' '; 
   falt[counter] = counter;
   //"falt, plats med index
   //counter (0-9) tilldelas
   //värdet counter (0-9)
   counter++;
   //counter = counter+1
  }
  cout << "\nUtskrift sker" << endl;
  counter = 0;
  
    while (counter < 10)				
  {
   cout << falt[counter] << ' '; 
   //"falt, plats med index
   //counter (0-9) skrivs ut
   //värdet counter (0-9)
   counter++;
   //counter = counter+1
  }
  
  
  
  
 return 0; 
}
