#include <iostream>
#include <cstdlib>
#include <cmath>
#include <conio.h>

using namespace std;
int main ()
{
	
	int a,b,c,n,i=0,x=0,y=0,s=0,spar,simpar;
	
	
cout<<"N= ";
cin>>n;

E:



b=rand()%10;

if(b>=3)&&(b<8));

c=rand()%10;

EA: a=rand()%10;
if(a%2==0){
	y++;
	goto EA;
}


cout<<"a= "<<a<<"b= "<<b<<"c= "<<c<<endl;
cout<<"a+b-c= "<<a+b-c<<endl;


if((a+b-c)%2==0){
	
x++;

spar+=(a+b-c);

	
}
else{
	
	simpar+=(a+b-c);
		
}

s+=(a+b-c);


i++;
if( i<n ) goto E;

cout<<"x= "<<x<<endl;
cout<<"x= "<<n-x<<endl;
}


