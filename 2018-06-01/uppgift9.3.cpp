#include <iostream>
using namespace std;

int inmatning();
void ritaLinje(int langd);
int main()
{
  int in;
  
  int langd = inmatning();
  
  ritaLinje(langd);


  
  
  
  
  
  
 return 0; 
}

int inmatning()
{
  int in;
 cout << "Hur lång ska linjen vara?" << endl;
  cin >> in;
  
  return in;
  
}

void ritaLinje(int langd)
{
 for(int i = 0; i < langd; i++)
 {
  cout << '*'; 
   
 }
  cout << endl;
  
  
}

 
