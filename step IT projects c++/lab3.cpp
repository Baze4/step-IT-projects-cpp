#include <iostream>
#include <cstdlib>

using namespace std;

int main ()
{
	int a ,b,c;
	
	
	a=rand()%16;
    a=a+3;
	b=rand()%20;
	b=b-10;
    
	c=rand()%100;
	
	
	
	
	(a>=3)&&(a<19) ? cout<<" DA "<<endl : cout <<" NU "<<endl;
	(b>=-10)&&(b<10) ? cout<<" DA "<<endl : cout <<" NU "<<endl;
	(c<=100)? cout <<" DA "<<endl : cout<<" NU "<<endl;
	cout <<" a= "<<a<<endl; cout <<" b= "<<b<<endl; cout <<" c= "<<c<<endl;
	
	cout<<"a+b-c="<<a+b-c<<endl;
	
	
	// Sarcina cam nu este inteleasa dar insusi rand cum functioneaza daca de rulat programu ap se primeste cum trebuie adica ce se cere in problema dar simt ca ceva nu ii corect sh nu stiu ce 
	// dupa logica ii tat corect daca de facut calcule ce nu ai da ap merge din acele intervale cerute
}

