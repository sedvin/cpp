#include <iostream>
using namespace std;

int main()
{
  int innvanare = 1000000;
  int ar = 0;
  
  while (innvanare < 2000000)
  {
   innvanare = innvanare * 1.05; ar++; 
    
  }
  
  cout << "Det tar: " << ar << " år för befolkningen att öka med 1 miljon." << endl;
  
  
  
  
  
 return 0; 
}
