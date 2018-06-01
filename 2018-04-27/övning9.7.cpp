#include <iostream>

using namespace std;

double indata(double& radie, double& hojd);
double volymcylinder(double hojd, double radie);
double areacylinder(double radie);
double pi = 3.14;


int main()		
{
  double radie, hojd;
  
  indata(radie, hojd);
 
  
  double area = areacylinder(radie);
  double volym = volymcylinder(hojd, radie);
  
  cout << "Arean är: " << area << endl;
  cout << "Volymen är: " << volym << endl;
  
    
    return 0;				
}
 
double areacylinder(double radie)
{
 double area = (radie*radie*pi);
 return area;
}

double volymcylinder(double hojd, double radie)
{
  double volym = (radie*radie*hojd*pi);
  return volym;
} 

double indata(double& radie, double& hojd)
{
   cout << "Mata in cylinderns radie och höjd: " << endl;
  cin >> radie >> hojd;
}












 
