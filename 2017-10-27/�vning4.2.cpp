#include<iostream>
using namespace std;
int main()
{
 int manader;
 cin >> manader;
 int ar = manader/12;
  
 int xtramanader = manader%12; 
 

 cout << manader << " månader = " << ar << " år och " << xtramanader << " månader." << endl; 
  
  
  return 0;
}
