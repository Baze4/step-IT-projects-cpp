#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

int main ()
{
	int a[100][100];
	int n;
	int i,j;
	int m;



	
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
	
	
//I
		for(int i=0;i<n/2;i++)
	{
		for(j=0;j<n/2;j++)
		{
			 cout<<setw(3)<<a[i][j];
	
}
cout<<endl;
}
cout<<endl;
//II
		for(int i=0;i<n/2;i++)
	{
		for(j=n/2;j<n;j++)
		{
			
	cout<<setw(3)<<a[i][j];
}
cout<<endl;

	}
	cout<<endl;
	//III
		for(int i=n/2;i<n;i++)
	{
		for(j=0;j<n/2;j++)
		{
			
	cout<<setw(3)<<a[i][j];
}
cout<<endl;
	
}
cout<<endl;


//IV
		for(int i=n/2;i<n;i++)
	{
		for(j=n/2;j<n;j++)
		{
			
	cout<<setw(3)<<a[i][j];
}
cout<<endl;
	
}
cout<<endl;
cout<<"I<=>II"<<endl;
//I<=>II

for(int i=0;i<n/2;i++)
	{
		for(j=0;j<n/2;j++)
		{
			m=a[i][j];
			a[i][j]=a[i][(n/2)+j];
			a[i][(n/2)+j]=m;
		
			
		
			cout<<setw(3)<<a[i][j];
			
}
cout<<endl;
}

cout<<endl;
cout<<"I<=>III"<<endl;
//I<=>III

for(int i=0;i<n/2;i++)
	{
		for(j=0;j<n/2;j++)
		{
			m=a[i][j];
			a[i][j]=a[(n/2)+i][j];
			a[(n/2)+i][j]=m;
			

			
			cout<<setw(3)<<a[i][j];
			
}
cout<<endl;

}

cout<<endl;
cout<<"I<=>IV"<<endl;

for(int i=0;i<n/2;i++)
	{
		for(j=0;j<n/2;j++)
		{
			m=a[i][j];
			a[i][j]=a[(n/2)+i][(n/2)+j];
			a[(n/2)+i][(n/2)+j]=m;
		
			
		
			
			cout<<setw(3)<<a[i][j];
			
}
cout<<endl;
}


cout<<endl;
cout<<endl;
cout<<endl;

cout<<"II<=>I"<<endl;

for(int i=0;i<n/2;i++)
	{
		for(j=n/2;j<n;j++)
		{
			m=a[i][j];
			a[i][j]=a[i][j-(n/2)];
			a[i][j-(n/2)]=m;
			
			cout<<setw(3)<<a[i][j];

}
cout<<endl;
}



}
