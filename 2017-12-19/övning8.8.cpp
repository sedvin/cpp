#include <iostream>
using namespace std;

int main()
{
  char raknesatt;
  char start;
  double tal1, tal2;
  
  
  
  cout << "Vill du beräkna något? (j/n)" << endl;
  cin >> start;
  
  
  
    while (start == 'j')
      {
     cout << "Vilka två tal vill du beräkna?" << endl;
     cin >> tal1 >> tal2;
	
     cout << "Vilket räknesätt vill du använda? (-/*+)" << endl; 
     cin >> raknesatt;
     
      switch(raknesatt)
      {
	case '-':
	cout << tal1 << '-' << tal2 << " = " << tal1-tal2 << endl;
	break;
	case '/':
	cout << tal1 << '/' << tal2 << " = " << tal1/tal2 << endl;
	break;
	case '*':
	cout << tal1 << '*' << tal2 << " = " << tal1*tal2 << endl;
	break;
	case '+':
	cout << tal1 << '+' << tal2 << " = " << tal1+tal2 << endl;
	break;
	
	default:
	  cout << "Något blev fel. " << endl;
      }
      
      cout << "Vill du köra igen? (j/n)" << endl;
      cin >> start;
     
    }
  
  
  
  
  
 return 0; 
}
