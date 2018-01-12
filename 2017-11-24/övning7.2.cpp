#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
  
int bensin;

    cout << "Hur många liter bensin har du?" << endl;
    cin >> bensin;
    
    
    if ( bensin > 10)
    {
     cout << "Kör på, du behöver inte tanka" << endl; 
    }
    else
    {
     cout << "Du behöver tanka." << "Du kan tanka: " << 50-bensin << " liter. Det skulle kosta: " << (50-bensin)*9.5 << " kronor." << endl;
    }
  
  
  
  
  
  
  
  
  return 0;
}
 
