#include <iostream>
#include <iomanip>
#include <conio.h>
#include <cstdlib>
#include <ctime>
#include <math.h>

using namespace std;

int main()
{
	
	srand(time(0));
	
	int a,b,c,R,q;
	int v[100];
	int n=rand()%10+1;
	int p[100],ivi=0;
	int g[100],ivp=0;
	
	
	
	for(int i=0;i<n;i++)
	{
		
		 a=rand()%10+1;
		 b=rand()%10+1;
		 c=rand()%10+1;
		
		cout<<"a= "<<a<<"b="<<b<<"c="<<c<<endl;
		
		v[i]=a+b-c;
		
		if(v[i]%2==0){
			
			p[ivi]=v[i];
			ivi++;
			
		}
		else{
			g[ivp]=v[i];
			ivp++;
			
		}
		
		

	

	}
	
	for(int i=0;i<n;i++){cout<<setw(3)<<v[i]<<endl;}
	for(int i=0;i<ivi;i++){cout<<setw(3)<<p[i];}
	for(int i=0;i<ivp;i++){cout<<setw(3)<<g[i];}
	
	
	for(int i=0;i<n;i+=2)
	{
		q=v[i];
		v[i]=v[i+1];
		v[i+1]=q;
	
	
}
		
		
	
	
	

	
	
	
	return 0;
}
 
