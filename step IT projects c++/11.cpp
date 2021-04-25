#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <ctime>

#include <cmath> //#include <math.h>



using namespace std;
 
int main()
{


     int a,b,c,R,s1=0,s=0;
     
      for(;;)
      { system("cls");
      	cout<<"\n\n\t\t MENIU"<<endl;
      	cout<<"\t\t  1. Enter a"<<endl;
      	cout<<"\t\t  2. Enter b"<<endl;
      	cout<<"\t\t  3. Enter c"<<endl;
      	cout<<"\t\t  4. Calculeaza a+b-c"<<endl;
      	cout<<"\t\t  5. Afiseaza rezultatul"<<endl;
      	cout<<"\t\tESC. Iesire"<<endl;
      	
      	switch(_getch())
      	{
      	  case 49: { system("cls"); cout<<" Enter a=";               cin>>a;      s++ ;           }break;
      	  case 50: { system("cls"); cout<<" Enter b=";               cin>>b;      s++ ;            }break;
      	  case 51: { system("cls"); cout<<" Enter c=";               cin>>c;      s++ ;             }break;
      	  case 52: {if(s!=3){		cout<<"pasul incorect";	exit(0);} system("cls"); cout<<" Sa calculat a+b-c";      R=a+b-c; system("pause");s1++;  }break;
      	  case 53: {    if(s!=3){	cout<<"pasul incorect";	exit(0);} system("cls"); cout<<" Rezultatul ::"<<R<<endl;          system("pause"); }break;
		  case 27: exit(0);	
      	}
       }


return 0;
}

