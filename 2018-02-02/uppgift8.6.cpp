 
#include <iostream>
#include <string>
using namespace std;
int main()
{
  int antalp;
  int antalr;
  
  
  cout << "Mata in antalet prickar" << endl;
  cin >> antalp;
  
  cout << "Mata in antalet rader: " << endl;
  cin >> antalr;
  
  for(int j = 0 ; j < antalr ; j++)
  {
  
  
  for(int i = 0; i < (antalp/antalr) ; i++)
  {
    cout << '*';
    
  }

  cout << endl;

  }
  
  
  
 return 0; 
}
 
 
 
 
 
