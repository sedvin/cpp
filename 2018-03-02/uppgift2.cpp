#include <iostream>
using namespace std;
int main()
{

int falt[10];

int n = 0;

while (n < 10)
  {
      cout << "Mata in ett tal: " << endl;
      cin >> falt[n];
      n++;
      
  
  }
    n=0;
    cout << endl;
    cout << "Före" << endl;
  
      while (n < 10)
      {
	  cout << falt[n] << endl;
	  n++;
	  
      
      }
  

  for (int n = 0; n < 10; n++)
  {
    if(falt[n] > 0)
    {
      falt[n] = falt[n] * -1 ; 
    }

  }
  
  
    n = 0; 
    
    cout << endl;
    
    cout << "Efter" << endl;
while (n < 10)
  {
      cout << falt[n] << endl;
      n++;
      
  
  }
  
  
    return 0;
}
 
 
