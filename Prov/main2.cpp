//Edvin �keson, Uppgift 2

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
  
    mvarde = (tal1 + tal2 + tal3)/3;				//medelv�rdet ber�knas
  
    
  cout << "Medelv�rdet av talen �r: " << fixed << setprecision(1) << mvarde << endl;	/*en fixed precision p� 1 
											  skrivs in f�r att f� 1
											  decimals noggrannhet
											*/
  
  
  
  
  
  
  
  
  
  
 return 0; 
  
}
 
