 
#include <iostream>
#include <string>
using namespace std;
int main()
{
int n;
int a = 0;
int b = 0; 

cout << "Mata ett tal: " << endl;
cin >> n;

while(a <= n)
{
  b = (a+b);
  
  a++;
  
}

  cout << "1 + 2 + 3 + 4 + 5 + ... + n = " << b << endl; 
  
  
 return 0; 
}
 
 
 
  
