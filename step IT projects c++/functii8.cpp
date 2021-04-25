#include <iostream>
#include <iomanip>
#include <conio.h>
#include <cstdlib>

using namespace std;

void insert(int a[][100],int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			a[i][j]=rand()%10;
		}
	}
}

void show (int a[][100],int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
		
		cout<<setw(3)<<a[i][j];
	}
	cout<<endl;	
	}

}

int sd1 (int a[][100],int n)
{
	int s=0;
	int s1=0;
	cout<<endl;
	for(int i=0;i<n/2;i++)
	{
		for(int j=0;j<n/2;j++)
		{
			
			cout<<setw(3)<<a[i][j];
			
		   	s+=a[i][i];
		   	s1+=a[n/2-1-i][j+n/2];

		    
		}
		cout<<endl;
	}
	cout<<"s= "<<s<<endl;
	cout<<"s= "<<s1<<endl;
}





int main ()
{
	int a[100][100];
	int n;
	cout<<"n= ";
	cin>>n; 
	
	insert(a,n);
	show(a,n);
	sd1(a,n);

}

