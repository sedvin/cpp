#include <iostream>
#include <string>
using namespace std;
int main()
{
  cout << "Klockslag (hh:mm): " << endl;
  string klockslag;
  getline(cin, klockslag);
  int kolon = klockslag.find(':', 0);
  string timme = klockslag.substr(0, kolon);
  string minut = klockslag.substr(kolon+1, 4);
  
  cout << "Timman är: " << timme << " " << "Minuten är: " << " " << minut << endl;
  
  
  
  return 0;
}





