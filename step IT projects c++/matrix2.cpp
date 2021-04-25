#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <conio.h>
#include <ctime>

using namespace std;

int main ()
{
	int a[100][100],b[100][100],maxarr[100];
	int n;
	int i,j;
	int maxR[100];
	int maxC[100];
	int x=0;
	int c=0;
	int x1;
	int q;
	int max=0,maxi,maxj;

	
	
	cout <<"introduceti dimensiunea matricii ";
	cin>>n;
	cout<<"introduceti x valoare ";
	cin>>x;
	
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			a[i][j]=rand()%10;
			b[i][j]=a[i][j];
		}
		
	}
	
	
	for(i=0;i<n;i++)
	{
		
	   
	   for(j=0;j<n;j++)
	   {
	   	if(a[i][j]>maxR[i]) maxR[i]=a[i][j];
	   	if(a[j][i]>maxC[i]) maxC[i]=a[j][i];
	   	cout<<setw(3)<<a[i][j];
	   }
	    cout<<"  MaxR= "<<maxR[i]<<"  MaxC= "<<maxC[i]<<endl;
     } 
     
     for(i=0;i<n;i++)
     {
       for(j=0;j<n;j++){
	   
       
       if(a[i][j]==x)c++;
   }
       
       
	 }
	 
	 cout<<"Valoarea x a fost introdusa de "<<c<<endl;
	 
	 cout<<"introduceti x1 elemente maximale ";
	cin>>x1;
	
	



for (q=0;q<x1;q++){
	for(i=0;i<n;i++)
		{for(j=0;j<n;j++){
		if(max<b[i][j]){
			max=b[i][j];
			maxi=i;
			maxj=j;
		}
		} 	
 		}
		b[maxi][maxj]=0;
		maxarr[q]=max;		
		max=0;		
		}
		
	for(int i=0;i<x1;i++){
	
	cout<<setw(3)<<maxarr[i];
}
		
		
	}
		
		
		
			
	









	 
	 


	   
	   	


