#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>

using namespace std;
int main ()
{
	int a,b,c;
    a=rand()%10;
	b=rand()%10;
	c=rand()%10;
	
    cout<<"a="<<a<<endl;
	cout<<"b="<<b<<endl;
	cout<<"c="<<c<<endl;
	
	
int R1=pow(a,2);
cout<<"R1="<<R1<<endl;

int R2=pow(b,3)-pow(c,4);
cout<<"R2="<<R2<<endl;

int R3=R1+R2;
cout<<"R3="<<R3<<endl;

double R4=sqrt(R3);
cout<<"R4="<<R4<<endl;

double R5=pow(sin(a)*cos(b),2);
cout<<"R5="<<R5<<endl;

double R6=R4/R5;
cout<<"R6="<<R6<<endl;

double R7=sqrt(R6);
cout<<"R7="<<R7<<endl;





}
