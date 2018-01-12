#include <iostream>
#include <string>

using namespace std; 
int main()
{
  int tal1, tal2;
  cout << "Mata in två heltal: " << endl;
  cin >> tal1 >> tal2;
  
 
  char rsatt;
  cout << "Välj ditt räknesätt, plus = + , minus = - " << endl;
  cin >> rsatt;
  
 
  
  
  switch (rsatt)
  {
    case '+':
      cout << "Svar: " << tal1 + tal2 << endl;
	break;
    case '-':
      cout << "Svar: " << tal1 - tal2 << endl;
	break;
    
  }
  
  
  
  
  
  
  
 return 0; 
} 
 
