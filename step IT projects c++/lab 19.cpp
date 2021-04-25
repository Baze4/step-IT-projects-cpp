#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	int a,b,c,n;
	int A[100];
	int B[100];
	int q;
	
	
		
	cout <<"introduceti dimensiunea vectorului n ";
	cin>>n;
	
	for(int i=0;i<n;i++){
	
	
	if(n%2!=0){
	
	cout<<"introduceti un numar par ";
	cin>>n;
	}
	}
	
	for(int i=0;i<n;i++)
	{
		
	   A[i]=rand()%10+1;
	   B[i]=rand()%10+1;
	
	}
	

	cout<<endl;
	
	cout<<"A= ";
	for(int i=0; i<n ;i++)
	{  cout<<setw(3)<<A[i];} 
		cout<<endl;
		

		
			cout<<endl;
			
			cout<<"B= ";
	for(int i=0; i<n ;i++)
	{  cout<<setw(3)<<B[i];} 
		cout<<endl;
		
	
	
	
		
for(int i=0;i<n;i++)
	{
		q=A[i];
		A[i]=B[i];
		B[i]=q;
	   
	}
cout<<endl;

cout<<"1 punct"<<endl;
			
	cout<<endl;
	cout<<"A= ";
	for(int i=0; i<n/2 ;i++)
	{  cout<<setw(3)<<A[i];} 
		cout<<endl;
		

		
			cout<<endl;
			cout<<"B= ";
	for(int i=n/2; i<n ;i++)
	{  cout<<setw(3)<<B[i];} 
		cout<<endl;
		
	 
cout<<"2 punct"<<endl;



		cout<<endl;
	cout<<"A= ";
	for(int i=n/2; i<n ;i++)
	{  cout<<setw(3)<<A[i];} 
		cout<<endl;
		

		
			cout<<endl;
			cout<<"B= ";
	for(int i=0; i<n/2 ;i++)
	{  cout<<setw(3)<<B[i];} 
		cout<<endl;
		
		
cout<<"3 punct"<<endl;



	cout<<endl;
	
	cout<<"A= ";
	for(int i=0; i<n ;i++)
	{  cout<<setw(3)<<A[i];} 
		cout<<endl;



for(int i=0;i<n;i++)
	{
		q=A[i];
		A[i]=A[n-1-i];
		A[n-1-i]=q;
	   
	}
	
		cout<<"A= ";
	for(int i=0; i<n ;i++)
	{  cout<<setw(3)<<A[i];} 
		cout<<endl;
		
	 
	cout<<"B= ";
	for(int i=0; i<n ;i++)
	{  cout<<setw(3)<<B[i];} 
		cout<<endl;
	
	for(int i=0;i<n;i++)
	{
		q=B[i];
		B[i]=B[n-1-i];
		B[n-1-i]=q;
	   
	}
	
		cout<<"B= ";
	for(int i=0; i<n ;i++)
	{  cout<<setw(3)<<B[i];} 
		cout<<endl;
		

	
	
	
	 

}
