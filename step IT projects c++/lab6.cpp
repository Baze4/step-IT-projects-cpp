#include <iostream>
#include <cstdlib>
#include <cmath>
#include <conio.h>

using namespace std;

int main ()
{
	int a;
	int b,c,d,e,l,x,y,z,j,p;
    
	switch(a)
	{
		
		case 0:{ cout<<"1. Pentru a conecta fluxul de intrare se utilizeaza (cin)?\n"; cout<<"\nPentru Da tastati 1 pentru NU 0 \n";cin>>b; 
		if(b==1){ b=1;}else {b=0;}}
		
		case 1:{ cout<<"2. Numele variabilei poate contine simboluri speciale? \n"; cout<<"\nPentru Da tastati 1 pentru NU 0 \n";cin>>c; 
		if(c==1){ c=1;}else {c=0;}}

		case 2:{ cout<<"3. Simbolul (bara n) realizeaza linie noua pentru informatie ? \n"; cout<<"\nPentru Da tastati 1 pentru NU 0 \n";cin>>d; 
		if(d==1){ d=1;}else {d=0;}}
		
		case 3:{ cout<<"4. Variabila reprezinta o entintate de memorie ce poate fi salvata ?\n"; cout<<"\nPentru Da tastati 1 pentru NU 0 \n";cin>>e; 
		if(e==1){ e=1;}else {e=0;}}
		
		case 4:{ cout<<"5. Se utilizeaza (;)cind instructiunea este finita?\n"; cout<<"\nPentru Da tastati 1 pentru NU 0 \n";cin>>l; 
		if(l==1){ l=1;}else {l=0;}}
		
		case 5:{ cout<<"6. Pentru includerea bibliotecii se utilizeaza operatorul (#)?\n"; cout<<"\nPentru Da tastati 1 pentru NU 0 \n";cin>>x; 
		if(x==1){ x=1;}else {x=0;}}
		
		case 6:{ cout<<"7. Pentru afisharea informatiei pe ecran se utilizeaza fluxul (Cout)?\n"; cout<<"\nPentru Da tastati 1 pentru NU 0 \n";cin>>y; 
		if(y==1){ y=1;}else {y=0;}}
		
		case 7:{ cout<<"8. Biblioteca Math.h raspunde pentru calculele si simbolurile matematici avansate?\n"; cout<<"\nPentru Da tastati 1 pentru NU 0 \n";cin>>z; 
		if(z==1){ z=1;}else {z=0;}}
		
		case 8:{ cout<<"9. Pentru utilizarea fluxului (cout si cin)se utilizeaza biblioteca <iostream>?\n"; cout<<"\nPentru Da tastati 1 pentru NU 0 \n";cin>>j; 
		if(j==1){ j=1;}else {j=0;}}
		
		case 9:{ cout<<"10. Este important utilizarea acoladelor ({  }) intr-un program ?\n"; cout<<"\nPentru Da tastati 1 pentru NU 0 \n";cin>>p; 
		if(p==1){ p=1;}else {p=0;}}
				
		cout<<"Nota este = "<<b+c+d+e+l+x+y+z+j+p;
		
		
		break;
}
		
	}
	
	
	
	

