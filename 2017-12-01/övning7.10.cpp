#include <iostream>
#include <iomanip>
#include <string>

using namespace std;
int main()
{
  char kon;
  
  
  cout << "Vilket är ditt kön? m/k/o" << endl;
  cin >> kon;
  
  if(kon == 'm')
  {
   cout << "Du är en man" << endl; 
  }
  else if(kon == 'k')
  {
   cout << "Du är en kvinna" << endl;
  }
  else
  {
   cout << "Du är ospecificerad" << endl; 
  }
  
  
  
  
  
  
  
 return 0; 
}
 
