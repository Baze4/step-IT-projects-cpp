#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <ctime>
#include <windows.h>
using namespace std;

int main()
{
  int a,b,c,x,y,n,z,s;
  
  do
  {
  	
  	cout<<"enter x....y min val 20"<<endl;
  	cin>>x>>y;
  	
  	cout<<"a+b-c="<<a+b-c<<endl;
  	
  	n=abs(y-x);
  	
  	
  	
  }while (n<20);
  
  
  
   do
  {
  	
  	
  	cout<<"enter z ";
  	cin>>z;
  	
  	cout<<"a+b-c="<<a+b-c<<endl;

  }while (z*2>n);
  
  
  
  for(int i=0;i<n;i++)
  {
  	
  	a=rand()%10;
  	b=rand()%10;
  	c=i+x;
  	s+=a+b-c;
  	cout<<"a+b-c="<<a+b-c<<endl;
  }
   	
  
  
}
  	
  	
  	
  
 
  
  
  
  	

