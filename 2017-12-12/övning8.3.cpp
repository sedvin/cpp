#include <iostream>
using namespace std;
//Nästledande forsatser
//flerdimentionella talfält
int main()
{
  int stort, litet, steg;
  cout << "Mata in det största talet, det minsta och hur långa steg programmet ska ta: " << endl;
  cin >> stort >> litet >> steg;
  for (int j=stort; j>litet; j = j-steg)
  {
    cout << j << ' ';
  }

  
  
return 0;
} 
