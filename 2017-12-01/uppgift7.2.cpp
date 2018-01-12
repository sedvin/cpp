#include <iostream>
#include <iomanip>
#include <string>

using namespace std;
int main()
{
  int dist;
  char sambo;
  int arbetstid;
  
  cout << "Skriv in om du har en sambo (j/n), hur långt du har till jobbet (km) och hur länge du ska arbeta där (månader)." << endl;
  cin >> sambo >> dist >> arbetstid;
  
  if (sambo == 'j' && dist > 50 && arbetstid < 36)
  {
   cout << "Du har rättighet till bidrag" << endl;
  }
  else if (sambo == 'n' && dist > 50 && arbetstid < 12)
  {
   cout << "Du har rättighet till bidrag" << endl;
  }
  else
  {
   cout << "Du har inte rätt till bidrag" << endl; 
  }
  
  
  
  
  
  
 return 0; 
}