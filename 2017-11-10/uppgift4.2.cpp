#include <iostream>


using namespace std;

int main()		
{
  int tal1;
  
  cout << "Skriv in ett tal: " << endl;
  cin >> tal1;
  int tal2 = tal1;
  
  tal2 = tal2+1;
  tal2 = tal2*2;
  tal2 = tal2-6;
  tal2 = tal2/2;
  tal2 = tal2+3;
  
  tal1 = tal2-tal1;
  
  cout << "Ditt tal +1, *2, -6, /2, +3 -Orginaltalet = " << tal1 << endl;
  
  
  
  
    return 0;			
}
 
 
