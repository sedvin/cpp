//Edvin Åkeson, Uppgift 3

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;
int main() 
{
  setlocale(LC_ALL, "swedish");
  
      string text;
  
  
   cout << "Mata in din text: " << endl;				//text matas in
   getline(cin, text);
   
      string tecken;
   
   cout << "Mata in 2 tecken att leta efter: " << endl;			//tecken att leta efter matas in
   getline(cin, tecken);
   
      int pos = text.find(tecken, 0);					//tecken hittas
   
      string hela = text.substr(pos, 4);				//tecken + 2 efterkommande tecken hittas
    
      cout << "\"" << hela << "\"" << " " << "plockades ut." << endl;	//tecken + 2 efterkommande skrivs ut
    
   
    
 return 0; 
  
}
 
 
