#include <iostream>
#include <cstdlib>
#include <ctime>
#include <conio.h>
#include <cmath>
#include <ctime>
using namespace std;

int iVAL(char mess[255])
{
 int val;	
 
 cout<<mess;
 cin>>val;
 
 return val;
}

int iRnd(char mess[255])
{int val;
	cout<<mess;
val=rand()%10+1;
    cout<<val<<endl;
	return val;
}



void afish(int x,char mess[255])
{
	cout<<mess<<x<<endl;
	
}
int calc(int a,int b,int c,bool x)
{
	if(x==1){return a+b-c;}
	else{
	return pow(a+b-c,iVAL("enter la ce putere doriti "));}
	

}
void insertV(int v[],int n)
{
	srand(time(0));

	for(int i=0;i<n;i++)
	{
int	a=iRnd("a");
int	b=iRnd("b");
int	c=iRnd("c");
	
		v[i]=calc(a,b,c,1);
		
		if (v[i]%2==0){
			cout<<"Valoarea pare= "<<v[i]<<endl;
		}
		else {
			cout<<"Valoarea impare= "<<v[i]<<endl;
		}
	}
}



int main()
{
int v[100];
int n=iVAL("Introdu N= ");
 insertV(v,n);
	
	  
	
	return 0;

}
