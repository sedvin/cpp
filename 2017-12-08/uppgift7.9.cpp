#include <iostream>
#include <string>

using namespace std; 
int main()
{

char kon;
int alder;
char barn;
  
cout << "Välkommen till AB diskriminering. Vilket kön tillhör du (m/k)? Hur gammal är du? Har du barn (j/n)?" << endl;
cin >> kon >> alder >> barn;

if (kon == 'm' && barn == 'n')
{
 cout << "Grattis, du är kvlificerad eftersom du är man utan barn!" << endl; 
}

else if (kon == 'm' && alder < 30)
{
 cout << "Grattis, du är kvlificerad eftersom du är man under 30 år!" << endl;
}
else if(barn == 'n' && alder < 30) 
{
 cout << "Grattis, du är kvlificerad eftersom du inte har barn och är under 30 år!" << endl;
}
else if (barn == 'n' && alder < 30 && kon == 'm')
{
 cout << "Grattis, du är kvlificerad eftersom du inte har barn, är under 30 år och man!" << endl;
}
else 
{
 cout << "Du är tyvärr inte kvalificerad" << endl;
}
    
    
    
    
    
    
    
    
 return 0; 
} 
  

