#include<iostream>
#include<cstdlib>
#include<string.h>
#include<conio.h>
#include<cmath>

using namespace std;

int iVAL(char mess[255])
{
  int val;
  cout<<mess;
  cin>>val;	
  
  return val;
}
void sVAL(int x,char mess[255]){ cout<<mess<<x<<endl; }

int iRnd(char mess[255])
{int val;
	cout<<mess;
val=rand()%10;
    cout<<val<<endl;
	return val;
}

void insertV(int v[],int n)
{
	for(int i=0;i<n;i++)
	{
		v[i]=iRnd("Elementele= ");
		
	}
}


void showV(int v[],int n)
{
	for(int i=0;i<n;i++)
	{
		sVAL(v[i],"V= ");
			
	}
}
int suma (int v[],int n)
{
	int s=0;
	for(int i=0;i<n;i++)
	{
			s+=v[i];	
	}
	

	return s;
}

int max1(int v[],int n)
{
	int max=v[0];
	
	for(int i=0;i<n;i++)
	{
		if (v[i]>max)max=v[i];	
	}
	return max;
}

int min1(int v[],int n)
{
	int min=v[0];
	
	for(int i=0;i<n;i++)
	{
		if (v[i]<min)min=v[i];	
	}
	return min;
}


int main()
{
	int max[100];
int v[100],n=iVAL("Introdu N= ");

  insertV(v,n);
  showV(v,n);
 int s=suma(v,n);
 sVAL(s,"suma este= ");
int maximum=max1(v,n);
 sVAL(maximum,"maximum = ");
 int minimum=min1(v,n);
 sVAL(minimum,"minimum = ");

 
  
  
  return 0;
}
