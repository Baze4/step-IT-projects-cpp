#include<iostream>
#include<cstdlib>
#include<iomanip>
#include<string.h>
#include<cmath>
#include<conio.h>

using namespace std;

int main ()
{
	

 int a[100][100], ni=6,mi=6;
 char b[100][100], nc=6,mc=6;
 float c[100][100],nf=6,mf=6;
 


 
 for(int i =0;i<ni;i++)
 {
 	for(int j=0; j<mi;j++)
 	{
 		a[i][j]=rand()%10;
 		
 		
 		cout<<setw(3)<<a[i][j];
	 }
	 cout<<endl;
 }

  
 for(int i =0;i<nc;i++)
 {
 	for(int j=0; j<mc;j++)
 	{
 		b[i][j]=char()%26+96;
 		
 		
 		cout<<setw(3)<<b[i][j];
	 }
	 cout<<endl;
 }
 
 
  for(int i =0;i<nf;i++)
 {
 	for(int j=0; j<mf;j++)
 	{
 		c[i][j]=rand()%10;
 		
 		
 		cout<<setw(3)<<c[i][j];
	 }
	 cout<<endl;
 }
 
 
 	FILE *fp;
 f=fopen("marcel","w");
 
 fprintf(fp,"%d %d",ni,mi);
 
 for(int i=)
 

 
 
 
 
 
 

}
