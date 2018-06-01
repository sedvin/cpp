#include <iostream>
using namespace std;
struct Stader {
 string namn;
 float temp;
  
  
  
  
};

Stader sorteraStader(Stader stad[]);
int main()
{
  Stader stad[4];
  //jfr int stad[4] 
  
    cout << "Mata in 4 städer och ange tempereatur" << endl;
    
    for(int i=0; i<4; i++)
    {
     cout << "Stad nummer " << (i+1) << ": ";
     cin >> stad[i].namn;
     cout << "Tempereaturen i " << stad[i].namn << " är " ;
     cin >> stad[i].temp;
    }

    //funktionen som hittar staden med högsta temperaturen.
    Stader hogst;
    hogst = sorteraStader(stad);
    
    cout << hogst.namn << " har temperaturen " << hogst.temp << " vilken är den högsta av de 4 städerna." << endl;

    return 0;
}

Stader sorteraStader(Stader stad[])
{
 Stader x;
  x = stad[0];
  for (int i=1; i<4; i++)
  {
   if (stad[i].temp > x.temp)
     x = stad[i];
  }
  
  return x;
}