 
#include <iostream>
#include <string>
using namespace std;
int main()
{
int t;
int fakultet = 1;

cout << "Mata ett värde för att beräkna fakultet: " << endl;
cin >> t;

for(int i= 1 ; i <= t ; i++)
{
  fakultet=i*fakultet;
  
  
}

  cout << "1 * 2 * 3 * 4 * 5 * ... + n = " << fakultet << endl; 
  
  
 return 0; 
}
 
 
 
  
