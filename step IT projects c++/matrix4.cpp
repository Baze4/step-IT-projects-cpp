#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

int main ()
{
	int a[100][100];
	int n;
	int i,j;

	
	cout <<"introduceti dimensiunea matricii ";
	cin>>n;

	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			a[i][j]=rand()%10;
			cout<<setw(3)<<a[i][j];
		}
		cout<<endl;
	}

	cout<<endl;
	cout<<endl;
	cout<<endl;
	

	
	
	
		for(int i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i>=j) cout<<setw(3)<<a[i][j];
	
}
cout<<endl;
	}
	cout<<endl;
	cout<<endl;
	cout<<endl;
	
	
	
	for(int i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i<=j) cout<<setw(3)<<a[i][j];
	
}
cout<<endl;
	}
	
	
	
}



	 
	

   

