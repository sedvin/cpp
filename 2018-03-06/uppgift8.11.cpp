 
#include <iostream>
#include <string>
using namespace std;
int main()
{

  int summa = 0;
  
  for(int n = 0 ; n < 20 ; n++)
  {
    summa = summa+1000;
    summa = summa * 1.05;
  }
    summa = summa + 1000;
  
cout << "Summan efter 20 år är " << summa << " kronor" << endl;  
 return 0; 
}
 
 
 
  
 
