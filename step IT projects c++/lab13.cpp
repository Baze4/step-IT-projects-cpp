#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <ctime>

#include <cmath>

using namespace std;
int main ()
{
	int a,b,c,n,i=0,R,x=0,y=100,max,min;
	
	srand(time(0));
	
	
 
    
	
	do
   
    {
    n=rand()%200;	
    	
	}while((n>=10&&n<=20)||(n>=30&&n<=40)||(n>=100&&n<=200));//punctu nr1
    
    cout<<"n= "<<n;
	a=rand()%10;
	b=rand()%10;	
    c=rand()%10;
    
    
while(a%2!=0){ // punctu nr2
	
	a=rand()%10;
	
}

cout<<"a= "<<a;
	
	while(b%2==0){// punctu nr2
	
	b=rand()%10;
	
}
cout<<"b= "<<b;


while(i<n) {
	

	
	cout<<"a+b-c ="<<a+b-c<<endl;
	i++;
	
	
	
}

	if((R>x)&&(R<y)){ // in partea cu sa se calculeze de cite ori a intrat in intervalul 0-100 nu cam inteleg  //punctu 3
		
		cout<<"R= "<<R<<endl;
	}
	else{
		cout<<"nu a intrat in interval 0-100"<<endl;
	}
	
if(a+b-c>pow(a,2)){//punctul 4
	
	c=rand()%10;
	cout<<"c= "<<c;
	
	cout<<"a+b-c"<<a+b-c<<endl;
	
}
else {
	cout<<"rezultatul nu este mai mare de cit a la 2"<<endl;
}


if(a+b-c%2==0>i%2!=0)max=a+b-c,min=i;//punctu 5
else{
	max=i;
	min=a+b-c;
}





cout<<"maximum este = "<<max<<endl;
cout<<"minimum este = "<<min<<endl;










}
 
