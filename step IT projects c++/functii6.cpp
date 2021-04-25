#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

int main ()
{
	int a[100][100];
	int i,j,k,n;
	int s=0;
	cout<<"introdu n= ";
	cin>>n;
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			a[i][j]=rand()%10;
		}
	}
	
		for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<setw(3)<<a[i][j];
		}
		cout<<endl;
	}
	cout<<endl;
	cout<<endl;
	cout<<endl;
	
	
	for(i=0;i<n/2;i++)
	{
		for(j=0;j<n/2;j++)
		{
			cout<<setw(3)<<a[i][j];
			 s+=a[i][j];
             s+=a[ (n-1)-i ][i]; 
		}
		cout<<endl;
	}
	
	
}
