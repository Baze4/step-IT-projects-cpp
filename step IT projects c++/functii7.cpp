#include<iostream>
#include<cstdlib>
#include<iomanip>
#include<conio.h>
#include<cmath>

using namespace std;
/*
void insertVECTORint(int v[],int n)
{
	
	for(int i=0;i<n;i++)
	{
		v[i]=rand()%10;
	}
	
}

void insertVECTORdouble(double v[],int n)
{
	
	for(int i=0;i<n;i++)
	{
		v[i]=rand()%10+1*0.1;
	}
	
}
*/


template <typename T,typename T1>

void insertVECTOR(T v[],T1 n)
{
	
	for(int i=0;i<n;i++)
	{
		v[i]=rand()%10;
	}
	
}


template <typename T,typename T1>

void show(T v[], T1 n)
{
	
	for(int i=0;i<n;i++)
	{
		cout<<setw(3)<<v[i];
	
	}
	
}

template <typename T,typename T1>
T suma(T v[],T n)
{
	T s=0;
	for(int i=0;i<n;i++)
	{
		s+=v[i];
	}
	cout<<endl;
	cout<<"suma= "<<s<<endl;
	return s;
}


int maxint(int v[],int n)
{
	int  max=v[0];
	for(int i=0;i<n;i++)
	{
		if(v[i]>max)max=v[i];
	}
	cout<<endl;
	cout<<"max= "<<max;
	return max;
}
double maxdouble(double v[],int n)
{
	double  max=v[0];
	for(int i=0;i<n;i++)
	{
		if(v[i]>max)max=v[i];
	}
	cout<<endl;
	cout<<"max= "<<max;
	return max;
}



int main ()
{

int v[100]; 
int n=rand()%10;

insertVECTOR(v,n);
show(v,n);
suma(v,n);
maxint(v,n);

cout<<endl;
double vd[100];
int nd=rand()%10;

insertVECTOR(vd,nd);
show(vd,nd);
suma(vd,nd);
maxdouble(vd,nd);


return 0;
}

