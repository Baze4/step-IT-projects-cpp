#include <iostream>
#include <cstdlib>
#include <ctime>
#include <conio.h>
#include <cmath>
#include <ctime>
using namespace std;
int iVal(char mess[255])
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
void sVAL(int x,char mess[255])
{
  	cout<<mess<<x;
	
}
int abc(int a,int b,int c,bool x)
{
	if(x==1){return a+b-c;}
	else{return pow(a+b-c,iVal(" Enter pow"));  }
	
}
void forr()
{int n=iRnd("n=");
	for(int i=0;i<n;i++)
    { int a=iRnd(" a=");
  int b=iRnd(" b=");
  int c=iRnd(" c=");
	 cout<<" a+b-c="<<a+b-c<<endl;
	}
}

int main()
{ srand(time(0));
 int a,b,c;

	 sVAL(abc(a,b,c,0)," REZ=");  
	 forr();
  return 0;
}
