//Uppgift 7.2 sidan 102
//Två sätt att lösa uppgiften

//vilkor 1:
//Avståndet hemmet - arbetsplatsen minst 50km

//Vilkor fl rsambo:
//varaktighet högst 3 år

//vilkor 2 för ensamstående 
//varaktighet högst 1 år

int avstand;
cout << "Ditt avstånd till arbetet (km)?";
cin >> avstand;

if(avstand <= 50)
{
 cout << "Du får inget skatteavdrag" << endl;
 
}
else
{
 char civiltillstand;
  cout << "Sambo eller ensamstående? (s/e)" << endl;
  cin >> civiltillstand;
  int ar;
  cout << "Hur länge kommer din dubbla bosättning att vara?(år) ";
  cin >> ar;
  
  if (((civiltillstand=='s') && (ar <= 3 ))		)
  {
    
  }
}
  
  
  
  
  
  
}