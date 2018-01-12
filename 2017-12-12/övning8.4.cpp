 
#include <iostream>
using namespace std;
//Nästledande forsatser
//flerdimentionella talfält
int main()
{
  int hastighet[8];
  cout << "m/s\tkm/h\n";
  
  
  for (int n=0; n<8; n++)
  {
    hastighet[n] = 5* (n+1);
    
    cout << hastighet[n] << "\t" ;
    cout << hastighet[n] * 3.6 << endl;
      
  }

  
  
  
  
return 0;
}