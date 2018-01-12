#include <iostream>
#include <iomanip>
#include <string>

using namespace std;
int main()
{
    double langd, vind;
    
    cout << "Skriv in längd och vindstyrka: " << endl;
    
    cin >> langd >> vind;
    
    if (langd > 7.92 && vind < 2.1)
    {
     cout << "Grattis, Du har slått rekord!" << endl; 
    }
    else 
    {
     cout << "Du slog tyvärr inte rekord." << endl; 
    }

    
    
    
    
    
    

  
  return 0;
}
  
 
