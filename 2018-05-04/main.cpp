#include <iostream>
using namespace std;
void meny();
void pluss();
void minuss();
void ganger();
void delatmed();

int main()
{
 meny();
  
 return 0;
}

void meny()
{
 int val; 
  
    cout << "Välj: " << endl;
    cout << "Plus (p)" << endl;
    cout << "Minus (m)" << endl;
    cout << "Gånger (g)" << endl;
    cout << "Delat med (d)" << endl;
    cout << "Avsluta (a)" << endl;
 
 cout << ":>";
 cin >> val;
 
    switch(val)
    {
      case 'a':
	return;
	break;
	
      case 'p':
      pluss();
      break;
      
      case 'm':
	minuss();
	break;
	
      case 'g':
	ganger();
	break;
	
      case 'd':
	delatmed();
	break;  
    };
     
 }
 
 
 void pluss()
 {
   double a, b;
   cout << "Tal 1: " << endl;
   cin >> a;
   cout << "Tal 2: " << endl;
   cin >> b;
   cout << a << '+' << b << '=' << (a+b) << endl << endl;
 };
 
  void minuss();
 {
   double a, b;
   cout << "Tal 1: " << endl;
   cin >> a;
   cout << "Tal 2: " << endl;
   cin >> b;
   cout << a << '-' << b << '=' << (a-b) << endl << endl;
 };
 
   void ganger();
 {
   double a, b;
   cout << "Tal 1: " << endl;
   cin >> a;
   cout << "Tal 2: " << endl;
   cin >> b;
   cout << a << '*' << b << '=' << (a*b) << endl << endl;
 };
 
   void delatmed();
 {
   double a, b;
   cout << "Tal 1: " << endl;
   cin >> a;
   cout << "Tal 2: " << endl;
   cin >> b;
   cout << a << '/' << b << '=' << (a/b) << endl << endl;
 };
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
}