#include <iostream>
#include <string>
using namespace std;
int main()
{
  for(int x = -50 ; x <= 50 ; x++)
  {
   for(int y = -20 ; y <= 20 ; y++)
   {
    if(x*3 - 7*y == 1)
    {
     cout << "X = " << x << " när Y = " << y << ". Då blir ekvationen 1." << endl;  
    } 
   }
  }

  
 return 0; 
}