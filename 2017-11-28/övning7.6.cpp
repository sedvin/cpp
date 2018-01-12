#include <iostream>
#include <iomanip>
#include <string>

using namespace std;
int main()
{
  int antal;
  
  cout << "Hur många skivor vill du köpa?" << endl;
  cin >> antal;
  
  double pris = antal*9.9;
  
  if (pris > 10 && pris < 50)
  {
   cout << "Du för: 5% rabbat. Priset blir: " << pris*0.95 << endl;
  }
  else if (pris > 50 && pris < 100)
  {
   cout << "Du för: 10% rabbat. Priset blir: " << pris*0.9 << endl;  
  }
  else if (pris > 100)
  {
   cout << "Du för: 15% rabbat. Priset blir: " << pris*0.85 << endl; 
  }
      

    
    
    
    
    
    

  
  return 0;
}
  
 
