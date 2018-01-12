//Edvin Åkeson, Uppgift 2

#include <iostream>
#include <iomanip>

using namespace std;
int main() 
{
  setlocale(LC_ALL, "swedish");
  
    double tal1, tal2, tal3;					//3 flyttal
  
    
  cout << "Mata in 3 flyttal: " << endl;			
  cin >> tal1 >> tal2 >> tal3;					//3 flyttal skrivs in
  
  
    double mvarde;
  
    mvarde = (tal1 + tal2 + tal3)/3;				//medelvärdet beräknas
  
    
  cout << "Medelvärdet av talen är: " << fixed << setprecision(1) << mvarde << endl;	/*en fixed precision på 1 
											  skrivs in för att få 1
											  decimals noggrannhet
											*/
  
  
  
  
  
  
  
  
  
  
 return 0; 
  
}
 
