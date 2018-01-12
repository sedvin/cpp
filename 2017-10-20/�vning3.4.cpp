#include <string>
#include <iostream>

using namespace std;

int main()		
{
  
  cout << "Skriv en text" << endl;
  string text;
  getline(cin, text);
  int langd = text.size();
  cout << langd << endl;
  
  
  
    return 0;				
}
