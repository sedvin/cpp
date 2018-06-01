#include <iostream>
using namespace std;

int inmatning();
void ritaRomb(int langd);
int main()
{
  int in;
  
  int langd = inmatning();
  
  ritaRomb(langd);


  
  
  
  
  
  
 return 0; 
}

int inmatning()
{
  int in;
 cout << "Vilken storlek på romben vill du ha?" << endl;
  cin >> in;
  
  return in;
  
}

void ritaRomb(int langd)
{
  for(int l = 0; l < 5; l++)
  {
    
 for(int i = 0; i < langd; i++)
 {
  cout << '*'; 
   
 }
  cout << endl;
  /*if(l = 1)
  {
   cout << ' '; 
  }*/
  }
}

 
 
