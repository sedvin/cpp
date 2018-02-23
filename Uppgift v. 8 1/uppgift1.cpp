#include <iostream>
#include <string>
using namespace std;
int main()
{

  int falt[5];
  for(int n = 0 ; n < 5 ; n++)
  {
    cout << "Mata in ett heltal: " << endl;
    cin >> falt[n];
  }
  cout << endl << "Talen är: "<< endl;
  
  int n = 0;
  int max = 5;
  while(n < max)
  {
    cout << falt[n] << endl;
    n++;
  }
  
 return 0; 
}
 
  
