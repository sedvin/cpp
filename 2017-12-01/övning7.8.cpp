#include <iostream>
#include <iomanip>
#include <string>

using namespace std;
int main()
{
  string a;
  string b;
  
  cout << "Mata in 2 strängar: " << endl;
  getline(cin, a);
  getline(cin, b);
  
  string c = a.substr(0, 1);
  string d = b.substr(0, 1);
  if(c<d)
  {
   cout << a << endl; 
  }
  else
  {
   cout << b << endl; 
  }
  
  
  
  
  
  
  
  
  
  
  
  
 return 0; 
}
