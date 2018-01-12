#include <iostream>
#include <string>

using namespace std;
int main()
{
int falt[10]={-3,45,-4,57,-32,5,-5,0,-5,-6};
//while-sats

int i = 0;
while (i < 10)
{
 cout << falt[i] << " ";
       //falt[0]
 i++;
}
  i=0;
      while (i < 10)
      {
      if (falt[i] > 0) 
	    falt[i] = falt[i] * (-1);
      
      i++;
      }
      cout << endl;
 i=0;     
      
      while (i < 10)
{
 cout << falt[i] << " ";
       //falt[0]
 i++;
}
      
  cout << endl;
      
    
  
  
  
  
  
  
  
 return 0; 
}
