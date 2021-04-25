#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	srand(time(0));
int v[100],n=rand()%10+1,s=0,contor=0,eimp=0,epar=0;

for(int i=0; i<n ;i++)
{
	v[i]=rand()%10+1;
		
}

	for(int i=0; i<n ;i++)
	{  cout<<setw(3)<<v[i];} 
		cout<<endl;
		cout<<endl;
	for(int i=0; i<n ;i++)
	{
		if(v[i]%2!=0)
	s+=v[i];
	}
	
	
	
	cout<<"s= "<<s<<endl;
	
	for(int i=0; i<n; i++)
	{
		 if(v[n-1]==v[i] ) contor++; 
		
	}
cout<<"Contorizator "<<contor;
	
	
	for(int i=0; i<n; i++)
	{
		if(v[i]%2==0 ) 
		epar++; 
		
	}
		for(int i=0; i<n; i++)
	{
		if(( i%2!=0) && (max<v[i])   ) {max=v[i];
				eimp++; 
			
			
		}
		
		}
		

	cout<<"\nelemente pare "<<epar<<endl;
	 cout<<"elemente impare "<<eimp<<endl;
	 cout<<"max= "<<max<<endl;

	 
	 
return 0;
}
	
		


	
	

