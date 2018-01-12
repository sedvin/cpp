#include <iostream>
#include <string>

using namespace std; 
int main()
{

string text;
string ord;



cout << "Skriv in en text: " << endl;
getline(cin, text);

cout << "Mata in ett ord som ska sökas efter: " << endl;
getline(cin, ord);

int plats = text.find(ord, 0);

if (plats >= 0)
{
 cout << "Ordet finns! " << endl; 
}
else 
{
 cout << "Ordet finns inte. " << endl; 
}
    
    
    
    
 return 0; 
} 
  

 
