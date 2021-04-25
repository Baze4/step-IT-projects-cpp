#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <ctime>
#include <math.h>

using namespace std;
 
int main()
{
	srand(time(0));

 int a,b,c,x,y,n,z;
 
 do
 {
 	cout<<" Enter x...y, min val 20 "<<endl;
 	cin>>x>>y;
 	
 	n=abs(y-x);
 	
 }while( n < 20 );
 
 
 do
 {
 	cout<<" Enter z=";
 	cin>>z;
 
 }while( z*2 > n );
 
 for(int i=0; i<n; i++ )
 {
 	a=rand()%10;
 	b=rand()%10;
 	c=i+x;
 	
 	s+=a+b-c;
 
   cout<<" a="<<" b="<<" c="<<c<<" a+b-c="<<a+b-c<<endl;	
 }
 
 
 
 
return 0;
}

