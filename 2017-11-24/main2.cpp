 
#include <iostream>
#include <iomanip>
#include <string>
			      //If, else. Skilj mellan '=' tilldelning, och '==' j mf relse.
using namespace std;
int main() 
{
  //ALTERNATIV 1
  /*
  if( 1 == 2 )
  {
    cout << '1' << endl;
  }
  else if ( 2 == 3 )
  {
    cout << '2' << endl;
  }
  else 
  {
    cout << '3' << endl;
  }
  */
  //ALTERNATIV 2
  
   if( 1 == 1 )
  {
    cout << "1" << endl;
  }
   else
  {
      if ( 2 == 3 )
	cout << "2" << endl;
      else
	cout << "3" << endl;
  }
  

  
  
  
  
  return 0;
}
 
