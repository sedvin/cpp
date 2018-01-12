#include <iostream>
#include <iomanip>

using namespace std;

int main()		
{
  float summa;
  float medelvarde;
  
  float tal1;
  float tal2;
  float tal3;
  
  cout << "Mata in 3 tal: " << endl;
  cin >> tal1 >> tal2 >> tal3;
  summa = (tal1+tal2+tal3);
  medelvarde = (tal1+tal2+tal3)/3;
  
    
  cout << "Summa " << fixed << setprecision(2) << summa << endl;
  cout << "Medelvärde "<< fixed << setprecision(2) << medelvarde << endl;
  
  
  
    return 0;				
}
