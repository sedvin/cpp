
#include <string>
#include <iostream>
#include <iomanip>
using namespace std;

int main()		
{
  float tal1, tal2;
    cout << "Ange tal 1: " << endl; // l�s in tv� tal.
      cin >> tal1;
    cout << "Ange tal 2: " << endl;
      cin >> tal2;
    //Om tal 1 �r st�rre �n 2, skriv ut tal 1, annars skriv ut tal 2.
   
   if(tal1 > tal2)
   {
     cout << tal1 << " �r st�rst" << endl;
   }
   else
   {
     cout << tal2 << " �r st�rst" << endl;
   }
  
  

    return 0;				
}
 
