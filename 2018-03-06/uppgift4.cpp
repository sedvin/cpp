#include <iostream>
using namespace std;
int main()
{
  int faltA[10];
  int faltB[10];
  int faltC[10];
  
      faltA[0] = 45;
      faltA[1] = 23;
      faltA[2] = -56;
      faltA[3] = 67;
      faltA[4] = 1;
  
      faltB[0] = 23;
      faltB[1] = 5;
      faltB[2] = 7;
      faltB[3] = -9;
      faltB[4] = 66;
  
  
   for (int n ; n < 10 ; n++)
   {
     if(faltA[n] >= faltB[n])
     {
      faltC[n] = faltA[n];
     }
      else if(faltB[n] > faltA[n])
      {
	faltC[n] = faltB[n];
      }
	
   }

    int n = 0;
     cout << "Fält C blir: " << endl;
    for (n ; n<5 ; n++)
    {
     
      cout << faltC[n] << endl;
      
    }
  
  
  
 return 0; 
}
 
 
 
  
