#include <iostream>

using namespace std;

double rakna(double area);

int main()		
{
  double radie;
  
  cout << "Mata in cylinderns radie: " << endl;
  cin >> radie;
  
  double fardigarea = rakna(radie);
  
  cout << "Arean är: " << fardigarea << endl;
    
    return 0;				
}
 
double rakna(double radie)
{
 double fardigarea = (radie*radie*3.14);
 return fardigarea;
  
  
  
}