#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <ctime>

#include <cmath> //#include <math.h>



using namespace std;

int main()
{
	srand(time(0));

int a,b,c,R,s;

      
      { system("cls");
      	cout<<"\n\n\t\t MENIU"<<endl;
      	cout<<"\t\t  1. Enter a"<<endl;

      	cout<<"\t\t  2. Enter b"<<endl;
      	cout<<"\t\t  3. Enter c"<<endl;
      	cout<<"\t\t  4. Calculeaza a+b-c"<<endl;
      	cout<<"\t\t  5. Afiseaza rezultatul"<<endl;
      	cout<<"\t\tESC. Iesire"<<endl;

      	switch(s)
      	{
      	  case 49: { system("cls"); cout<<" Enter a=";               cin>>a;                   }break;

      	  



switch(s)
      	{
      	  case 50: { system("cls"); cout<<" Enter b=";               cin>>b;                   }break;
      	}
switch(s)
      	{
      	  case 51: { system("cls"); cout<<" Enter c=";               cin>>c;                   }break;
      	}
      	switch(s)
      	{
      	  case 52: { system("cls"); cout<<" Sa calculat a+b-c";      R=a+b-c; system("pause"); }break;
      	  default :{cout<<"Eroare";}
      	  
      	}
      	switch(s)
      	{
      	  case 53: { system("cls"); cout<<" Rezultatul ::"<<R<<endl;          system("pause"); 
			default :{cout<<"Eroare";}}break;
		  case 27: exit(0);}
      	}


       }


return 0;
}




	

