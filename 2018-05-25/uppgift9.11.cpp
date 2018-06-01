#include <iostream>
using namespace std;
double hittaMinst(double talfalt[], int antal); //deklarerar funktionen
double hittaStorst(double talfalt[], int antal);
double jfr(double minst, double storst);
int main()
{
  int antal = 10;
  double talfalt[] = {2.43, 54.68, 54.71, 6.66, 7.89, 0.45, -8.08, 7.55, -6.55, 9.99,};
  
  cout << "Största talet är: " << hittaMinst(talfalt, antal) << endl;
  cout << "Minsta talet är: " << hittaStorst(talfalt, antal) << endl;
  cout << "Största - Minsta = " << jfr(hittaMinst(talfalt, antal), hittaStorst(talfalt, antal)) << endl;

  
  
  
 return 0; 
  
		    }

		    //definierar funktionen
		    double hittaMinst(double talfalt[], int antal)
		    {
		    double temp;
		      temp = talfalt[0];
		      
		      for(int i=1; i<antal ; i++)
		      {
			
			  if (talfalt[i] < temp)
			  {
			    temp = talfalt[i];
			  }
			  
		      }
		      
		      return temp;
		      
		    }
		    
		    

	    double hittaStorst(double talfalt[], int antal)
	    {
	    double temp;
	      temp = talfalt[0];
	      
	      for(int i=1; i<antal ; i++)
	      {
		
		  if (talfalt[i] > temp)
		  {
		    temp = talfalt[i];
		  }
		  
	      }
	      
	      return temp;
	      
	    }
	    
	    
	    
    double jfr(double minst, double storst)
    {
      
      
      
      
     return (storst - minst); 
      
    }
      