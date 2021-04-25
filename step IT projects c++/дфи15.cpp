#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <ctime>
#include <math.h>

using namespace std;
 
int main()
{
	srand(time(0));

 int a,b,c,x,y,n,z,s=10;
 int cx=-1, cy=-1, cz=0;
 do
 {
 	cout<<" Enter x...y, min val 20 "<<endl;
 	cin>>x>>y;
 	
 	n=abs(y-x);
 	cx++;
 	cy++;
 }while( n < 20 );
 
 
 do
 {
 	cout<<" Enter z=";
 	cin>>z;
 
 }while( z*2>n );
 
 for(int i=0; i<n; i++ )
 {
 	a=rand()%10;
 	b=rand()%10;
 	c=i+x;
 	
 	if(i<z || i>=n-z )s+=a+b-c;
 
   cout<<" a="<<" b="<<" c="<<c<<" a+b-c="<<a+b-c<<endl;	
   
   
   
 }
 cout<<"De cate ori s-a introdus x si y= "<<cx;

 
 
return 0;
}
