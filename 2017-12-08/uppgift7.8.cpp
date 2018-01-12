#include <iostream>
#include <string>

using namespace std; 
int main()
{

  int mano, manu, kvio, kviu;
    mano = 12;
    manu = 3;
    kvio = 3;
    kviu = 8;
  
  int lon;
  char kon;
  int val;  
    
    cout << "1. Presentera statistik" << "\n" << "2. Mata in en ny uppgift" << "\n" << "3. Mata in helt ny statistik" << endl;
    
    cin >> val;
    
    if (val == 1)
    {
          cout << "			Man 	Kvinna" << endl;
	  cout << "Minst 20000:	" << mano << "                     " <<	kvio  << endl;
	  cout << "Mindre än 20000:   "<< manu << "               " <<	kviu << endl;
    }
	      else if (val == 2) 
	      {
		  cout << "Skriv in kön och lön (m/k)" << endl;
	      cin >> kon >> lon;
	    
		  if (kon == 'm' && lon > 20000)
		  {
		  mano++; 
		  }
		  else if (kon == 'm' && lon < 20000)
		  {
		  manu++; 
		  }
		  else if (kon == 'k' && lon > 20000)
		  {
		  kvio++; 
		  }
		  else if (kon == 'k' && lon < 20000)
		  {
		  kviu++; 
		  } 
    
			cout << "			Man 	Kvinna" << endl;
		    cout << "Minst 20000:	" << mano << "                     " <<	kvio  << endl;
		    cout << "Mindre än 20000:   "<< manu << "               " <<	kviu << endl;
	      
	      }
	      
	      else if (val == 3) 
	      {
		cout  << "Mata in hur många män som tjänar över och under 20000kr. Mata sedan in hur många kvinnor som tjänar över och under 20000kr." << endl;
		cin >> mano >> manu >> kvio >> kviu;
		
		cout << endl << "Tabellen ser ut såhär: " << endl << endl;
		
		
		          cout << "			Man 	Kvinna" << endl;
			  cout << "Minst 20000:	" << mano << "                     " <<	kvio  << endl;
			  cout << "Mindre än 20000:   "<< manu << "               " <<	kviu << endl;
	      }
    
    
  
  
  
  
  
  
  
  
  
  /*
  
    
    cout << "			Man 	Kvinna" << endl;
    cout << "Minst 20000:	" << mano << "                     " <<	kvio  << endl;
    cout << "Mindre än 20000:   "<< manu << "               " <<	kviu << endl;
    
    cout << endl;
    
    cout << "Skriv in kön och lön (m/k)" << endl;
    cin >> kon >> lon;
  
    if (kon == 'm' && lon > 20000)
    {
     mano++; 
    }
    else if (kon == 'm' && lon < 20000)
    {
     manu++; 
    }
    else if (kon == 'k' && lon > 20000)
    {
     kvio++; 
    }
    else if (kon == 'k' && lon < 20000)
    {
     kviu++; 
    } 
  
  cout << endl;
  cout << "Den nya tabellen ser ut såhär: " << endl;
  cout << endl;
  
    cout << "			Man 	Kvinna" << endl;
    cout << "Minst 20000:	" << mano << "                     " <<	kvio  << endl;
    cout << "Mindre än 20000:   "<< manu << "               " <<	kviu << endl;
    
  
  */
  
 return 0; 
} 
  
