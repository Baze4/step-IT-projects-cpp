#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <ctime>

#include <cmath> 


using namespace std;

int main(){



int a,b,c,n,i=0,RPAR=0,CaPAR=0, spar=0, simp=0, max=-1000, min=1000,R,R1,R2;
  srand(time(0));
   n=rand()%10;
   
   cout<<" n="<<n<<endl;
  
  E: 
   
   b=rand()%10;
   
   if( (b>=3) && ( b<8) ) b=0;
   
   c=rand()%10;
   
 EA:  a=rand()%10;
      if(a%2==0){
      	CaPAR++;
      	goto EA; 
	  }  
      
    //  if(a%2==0) a++;
      
   cout<<" i="<<i+1<<" a="<<a<<" b="<<b<<" c="<<c<<endl;
   cout<<" i="<<i+1<<" a+b-c="<<a+b-c<<endl;
   
   
if(max<=a+b-c)max=a+b-c;
if(min>=a+b-c)min=a+b-c;
if(i==0)R1=a+b-c;
if(i==1)R2=a+b-c;
   
   if( (a+b-c)%2==0 && (a+b-c)>=-10 && (a+b-c)<10)
   {
   	n++;
   }
   
   
   
   if( (a+b-c)%2==0 )
   {
     RPAR++;
   
     spar+=(a+b-c);
   }
   else
    {
    	simp+=(a+b-c);
	}
   
   //s=s+(a+b-c);
   //  s+=(a+b-c);
   
   i++;
   if( i < n ) goto E;
   R=a+b-c;
   
cout<<" RPAR="<<RPAR<<" RIMPAR="<<n-RPAR<<endl;
cout<<" minimu="<<min<<" maximu="<<max<<endl;
cout<<" R1="<<R1<<" R2="<<R2<<" R="<<R<<endl;
cout<<" diferenta 1="<<R1-R2<<" diferenta 2="<<R1-R;
   




return 0;
}
