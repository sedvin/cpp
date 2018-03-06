 
#include <iostream>
#include <string>
using namespace std;
int main()
{

  int summa = 0;
  int tid = 0;
  do
  {
    tid++;
    summa = summa+1000;
    summa = summa * 1.05;
  }
  while(summa < 100000);
  
cout << "Efter " << tid << " år är summan " << summa << " kronor" << endl;  
 return 0; 
}
 
 
 
  
 
 
