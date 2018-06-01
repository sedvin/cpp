#include <iostream>						
using namespace std;	

double in(double falt[]);
double ut(double falt[]);

int main ()							
{

  double falt[10];
  in(falt);
  ut(falt);
   
   return 0;							
}


double in(double falt[10])
{
 
  
  for(int i = 0; i < 10; i++)
  {
   cout << "Mata in tal " << i+1 << ": ";
   cin >> falt[i];

  }
}

double ut(double falt[10])
{
  
  double temp = 0;
 
  for(int i = 0; i < 10; i++)
  {
   if (temp < falt[i])
   {
     
    temp = falt[i]; 
    
   }
    
  }
  cout << "Det största talet är: " << temp << endl;
  
  
  
}