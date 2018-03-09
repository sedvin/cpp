//Uppgift 1b, Edvin

#include <iostream>
using namespace std;
int main()
{
  int n = -10;					//ett tal n = -10 (starttalet)		  
  while(n <= 10)				// medans n <= 10 skrivs n ut och adderas med tre för att
  {						// endast visa var tredje tal
   cout << n << ' ';
   n = n+3;
  }
  
  cout << endl;
  
 return 0; 
}
 
  
 
