
#include <iomanip>
#include <iostream>

using namespace std;

int main()
{

  int tal[3];
  cout << "Mata in 3 heltal" << endl;
  cin >> tal[0] >> tal[1] >> tal[2];
  
  int temp = tal[0];
  tal[0] = tal[2];
  
  tal[2] = temp;
  
  
  cout << endl << tal[0] << endl << tal[1] << endl << tal[2] << endl;
  
  
  
  
    return 0;				
}
 
 
