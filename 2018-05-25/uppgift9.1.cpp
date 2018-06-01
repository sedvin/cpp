#include <iostream>
using namespace std;
double omkretsCirkel(double radie);

const double PI = 3.1415;

int main()

{
  
  double radie;
  
  cout << omkretsCirkel(radie) << endl;

return 0;

}

double omkretsCirkel(double radie)
{
  cout << "Vad är raiden?: " << endl;
  cin >> radie;
  
  
  double O = PI * (2*radie);
  
  return O;
  
}


