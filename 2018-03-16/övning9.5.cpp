#include <iostream>

using namespace std;

void ritaTriangel(int hojd, char tecken);


int main()		
{
  int inmathojd;
  char inmattecken;
  
  cout << "Mata in hur hög triangeln ska vara och vilket tecken den ska bestå av: " << endl;
  cin >> inmathojd >> inmattecken;
  
  cout << endl;
  
  ritaTriangel(inmathojd, inmattecken);
  
  
  
  return 0;				
}
 
 
 void ritaTriangel(int hojd, char tecken)
{
  for(int i = 1; i <= hojd; i++)
  {
   for(int j = 1; j <= i; j++)
   {
    cout << tecken; 
   }
   cout << endl;
  }
}