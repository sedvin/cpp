#include <iostream>
using namespace std;
int main()
{

  int tal = 0;
  int tal2;
  char svar;
  
  do {
    cout << "Mata in ett tal" << endl;
    cin >> tal2;
    
    tal = tal2 + tal;
    cout << "Summa: " << tal << endl;
    
    cout << "Vill du fortsätta?(J/N)" << endl;
    cin >> svar;
  } while (svar == 'j' || svar == 'J');
  
  if(svar == 'n' || 'N')
  {
    cout << "Du valde att avsluta." << endl;
  }
  else
  {
    cout << "Felinmatning" << endl;
  }
  
  
  
    return 0;
}
 
