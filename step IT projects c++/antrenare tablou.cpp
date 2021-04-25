#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <ctime>
#include <math.h>

using namespace std;

int main ()
{
	int a[200],n,i,s=0;
	
	cout<<"introduceti dimensiunea tabloului ";
	cin>>n;
	
	for(i=0;i<n;i++){
		cout<<"introduceti valorile tabloului: ";
		cin>>a[i];
		
	}
	
	for(i=0;i<n;i++)
	{
		s+=a[i];
		
	}
	
	cout<<"s= "<<s<<endl;
	
	
	
	
}
	
	

