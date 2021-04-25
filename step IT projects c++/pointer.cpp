#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

int main ()
{
int a1[100];
int a[100];
int b[100];
int c[100];
int n;
int si=0;
int sp=0;
int temp;
int *p1[100];
int *p;
int *b1;
int *c1;
int *s1;
int *s2;
int i;

p=a;
b1=b;
c1=c;

s1=&si;
s2=&sp;


cout<<"n= ";
cin>>n;







for(int i=0; i<n; i++)
{
	*(p+i)=rand()%10;
	cout<<*(p+i)<<endl;


}


for(int i=0;i<n;i++)
{
	if(*(p+i)%2==0) *s1=*s1+*(p+i);
	if(*(p+i)%2!=0) *s2=*s2+*(p+i);
	
}


cout<<"suma para= "<<*s1<<endl;
cout<<"suma impara= "<<*s2<<endl;


cout<<endl;
cout<<endl;



	 for(i=0;i<n;i++)
	{
		if(*(p+i)%2==0){
    *(b1+i)=*(p+i);
		cout<<"pare= "<<*(b1+i)<<endl;}
	}
	
	for(i=0;i<n;i++)
	{
		if(*(p+i)%2!=0){
    *(c1+i)=*(p+i);
		cout<<"impare= "<<*(c1+i)<<endl;}
	}





for(int i=0 ; i<n ; i++)
 {
 	 p1[i] =&a1[i];
 }




for (int i = 0; i < n; i++) 
 {
    
    *p1[i]=rand()%10;
    cout<<" "<<*p1[i];
}
cout <<endl;
	

	 for(int i=0 ; i<n/2 ; i++)
	 {
	 	temp=*p1[i];
	 	*p1[i]=*p1[n-i-1];
	 	*p1[n-i-1]=temp;
	 	
	 }
	 cout<<"schimbare locurilor"<<endl;
	 for(int i=0 ; i<n ; i++)
	 {
	 	cout<<" "<<*p1[i];
	 	
	 }
	
	 

	 
	 
	
	
	
}
