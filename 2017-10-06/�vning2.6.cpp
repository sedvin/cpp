
#include <iomanip>
#include <iostream>

using namespace std;

int main()		
{
  int summa;
  float medelvarde;
  
  int tal1;
  int tal2;
  int tal3;
  
  cout << "Mata in 3 tal: " << endl;
  cin >> tal1 >> tal2 >> tal3;
  summa = (tal1+tal2+tal3);
  medelvarde = (float)(tal1+tal2+tal3)/3;
  
    
  cout << "Summa " << fixed << setprecision(2) << summa << endl;
  cout << "Medelvärde "<< fixed << setprecision(2) << medelvarde << endl;
    
    return 0;				
}
