#include <iostream>

using namespace std;

double volymcylinder(double hojd, double radie);
double areacylinder(double radie);

int main()		
{
  double radie, hojd;
  
  
  cout << "Mata in cylinderns radie och höjd: " << endl;
  cin >> radie >> hojd;
 
  
  double area = areacylinder(radie);
  double volym = volymcylinder(hojd, radie);
  
  cout << "Arean är: " << area << endl;
  cout << "Volymen är: " << volym << endl;
  
    
    return 0;				
}
 
double areacylinder(double radie)
{
 double area = (radie*radie*3.14);
 return area;
}

double volymcylinder(double hojd, double radie)
{
  double volym = (radie*radie*hojd*3.14);
  return volym;
}