#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	srand(time(0));
	
	int a,b,c;
    int v[100],vi[100],vp[100],ivi=0,ivp=0;
	int n=rand()%10+1;
	
	for(int i=0; i<n;i++)
	{
		a=rand()%10+1;
		b=rand()%10+1;
		c=rand()%10+1;
		
		v[i]=a+b-c;
		
		if( v[i]%2==0 ){
			vp[ivp]=v[i];
			ivp++; 
		}	
		else{
			vi[ivi]=v[i];
			ivi++; 
		}
	}
	
	for(int i=0; i<n  ;i++){ cout<<setw(3)<<v[i]; } cout<<endl;
	for(int i=0; i<ivi;i++){ cout<<setw(3)<<vi[i];} cout<<endl;
	for(int i=0; i<ivp;i++){ cout<<setw(3)<<vp[i];} cout<<endl;
	
	

     cout<<endl;
	for(int i=0; i<n  ;i++){ cout<<setw(3)<<v[i]; } cout<<endl;
	
	for(int i=0,q; i<n;i+=2)
	{
	     q  = v[i];
	  v[i]  = v[i+1];
	 v[i+1] = q;
	  	
    }
	cout<<endl;
	for(int i=0; i<n  ;i++){ cout<<setw(3)<<v[i]; } cout<<endl;
	
	return 0;
}
