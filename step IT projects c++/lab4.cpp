#include <iostream>
#include <cstdlib>
#include <cmath>
#include <ctime>

using namespace std;

int main()
{
	int a,b,c,x,y;
	srand(time(0));
	
	
   a=rand()%10;
   b=rand()%10;
   c=rand()%10;
   x=rand()%10;
   y=rand()%10;
   
  
   
    cout<<" a="<<a<<" b="<<b<<" c="<<c<<endl;
    
    if(a%2==0){ a=rand()%150;a=a-100; }
    cout<<" a="<<a<<endl;
    
    double R1=pow(a,2)+pow(b,x+y)/sqrt(c);
    cout<<" R1="<<R1<<endl;
    
    double R2=sqrt(R1);
    cout<<" R2="<<R2<<endl;
    
    double R3=a+b/pow(c,2)-b+sqrt(a/b);
    cout<<" R3="<<R3<<endl;
    
    double R4=sin(pow(a,4));
    cout<<" R4="<<R4<<endl;
    
    double R5=R3/R4;
    cout<<" R5="<<R5<<endl;
    
    double R6=sqrt(R5);
    cout<<" R6="<<R6<<endl;
    
    double R7=sqrt(R3/R6);
    cout<<" R7="<<R7<<endl;
    
    if(R7>0){a=2;b=3;c=4;// cind se schimba oricum ab si c da nan la calcule si mereu raspunsu va fi 1 la urma
        cout<<" a="<<a<<" b="<<b<<" c="<<c<<endl;
    
    	R1=pow(a,2)+pow(b,x+y)/sqrt(c);
    	R2=sqrt(R1);
    	R3=a+b/pow(c,2)-b+sqrt(a/b);
    	R4=sin(pow(a,4));
    	R5=R3/R4;
    	R6=sqrt(R5);
    	R7=sqrt(R3/R6);
    	cout<<" R7="<<R7<<endl;
    	
	}
	else if (R7<=a+b-c){
		
		R7=0;
	}
	 {
	
	R7=1;
	
		}
		cout<<" R7="<<R7<<endl;
		
		return 0;
		
		
		
	
   
    
    
    
    
    
    
    
    
	
	
}
