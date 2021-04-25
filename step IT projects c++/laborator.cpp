#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;

int main()
{
	int a[100][100];
	int b[100][100];
	int c[100];
	int d[100][100];
	int p[100][100];
	int n,m,i,j;
	int k=0;
	int ok;
	
	cout<<" n= ";
	cin>>n;
	cout<<" m= ";
	cin>>m;
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			a[i][j]=rand()%10;
		  	b[i][j]=rand()%10;
			
		}
		
	}
	
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			cout<<setw(3)<<a[i][j];
			
		}
		cout<<endl;
	}
	cout<<endl;
	cout<<endl;
	cout<<endl;
	
		for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			cout<<setw(3)<<b[i][j];
			
		}
		cout<<endl;
	}
	cout<<endl;
	cout<<endl;
	cout<<endl;

// it 1
	

			

	
	
	
	
	
	
	
	
	// it 2
		for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(a[i][j]==b[i][j])
			{
				cout<<endl;
				cout<<"intersectiile sunt ";
			cout<<a[i][j];
			}
			
		}
	}
	cout<<endl;
	cout<<endl;
	
	//it 3
	
	
	
		for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
	
	     d[i][j]=a[i][j]-b[i][j];
	
	
}
}

	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{

cout<<setw(3)<<d[i][j];


}
cout<<endl;
}
cout<<endl;
cout<<endl;

	
	


//it 5


	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
	
	     cout<<a[i]<<b[j]<<a[j]<<b[i];
	
	
}
}
	
	
	
	
	
	
	
	
}
