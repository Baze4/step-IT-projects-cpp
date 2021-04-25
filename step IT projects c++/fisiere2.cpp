#include<iostream>
#include<cstdlib>
#include<iomanip>
#include<string.h>
#include<cmath>
#include<conio.h>
using namespace std;

int main()

{
	FILE *fp;
	FILE *fi;
	
	int a[100];
	int b[100];
	int n;
	cout<<"n= ";
	cin>>n;
	
	fp=fopen("par.txt","w");
	fi=fopen("impar.txt","w");

	for(int i =0 ;i<n;i++)
	{
		a[i]=rand()%10;
		
		if(a[i]%2==0)
		{
			cout<<setw(2)<<a[i];
			putc((int)a[i],fp);
		}
	
	}
	
		for(int i =0 ;i<n;i++)
	{
		b[i]=rand()%10;
		
		if(b[i]%2!=0)
		{
			cout<<setw(2)<<b[i];
			putc(b[i],fi);
		}
	
	}
		fclose(fp);
			fclose(fi);
	

	
	
}
