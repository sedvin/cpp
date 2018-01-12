
#include <string>
#include <iostream>
#include <iomanip>
using namespace std;

int main()		
{
  float tal1, tal2;
    cout << "Ange tal 1: " << endl; // läs in två tal.
      cin >> tal1;
    cout << "Ange tal 2: " << endl;
      cin >> tal2;
    //Om tal 1 är större än 2, skriv ut tal 1, annars skriv ut tal 2.
   
   if(tal1 > tal2)
   {
     cout << tal1 << " Är störst" << endl;
   }
   else
   {
     cout << tal2 << " Är störst" << endl;
   }
  
  

    return 0;				
}
 
