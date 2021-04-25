#include<iostream>
#include <conio.h>
#include<cstdlib>
#include<ctime>
#include<cmath>
using namespace std;
int main()
{
	srand(time(0));

int a,b,c,n,R,RR,i=0,max=-2000000,min=2000000;

n=rand()%10+1;

while(i<n){
	a=rand()%10+1;
	b=rand()%10+1;
	c=rand()%200;
	R=a+b-c;
	
	if(a%2!=0){
		a++;
	}
	if(b%2==0){
		b++;
	}
	if(b>10){
		b-=2;
	}

	if (R>0 || R<100){
		RR++;
	}
	
	if(R>pow(a,2)){
	    c=rand()%10+1;
	}
	
	if(R%2==0 && i%2!=0){
		if(R>max){
			max=R;
			
		}
		if(R<min){
			min=R;
			
		}
	}
	
	if(c>0 && c<10){
	  c=rand()%10+10;
	}
	else if(c>20 && c<30){
	  c=rand()%30+10;
	}
	else if(c>40 && c<100){
	  c=rand()%100+100;
	}
	
	cout<<" a="<<a<<" b="<<b<<" c="<<c<<" a+b-c="<<R<<endl;
	cout<<" i="<<i<<endl;
	cout<<" RR="<<RR<<endl;
	i++;
}

	cout<<"max="<<max;
	cout<<"min="<<min;




	
	
	
return 0;
}
