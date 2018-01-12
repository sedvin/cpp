#include <iostream>
#include <string>
using namespace std;
int main()
{  
  string in; 
  cin >> in;
  cin.ignore(1000,'\n');
    // Klipper av utmatningen vid mellanslag
  cout << in << endl;
    // Klipper av vid nyradstecken
  getline(cin, in);
  cout << in << endl;
  
 //cin.ignore(1000,'\n');
  
  
  
  /*
  string s = "Observera";
  int hitta = s.find("seg",0);
  cout << hitta << endl;
  string delstring = s.substr(2,7);
  cout << delstring << endl;
  */
  
  
  
  /*
  string strang = "Lektionssal";
  cout << strang << endl;
  strang ="Kul";
  cout << strang << endl;
  int langd = strang.size();
  cout << langd << endl;
  int hitta = strang.find('u',0);
  cout << hitta << endl;
    */
  
  
  
  return 0; 
}