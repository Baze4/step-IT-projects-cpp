#include<iostream>
#include<cstdlib>
#include<string.h>
#include<conio.h>
#include<cmath>
#include<iomanip>

using namespace std;

int iVAL(char mess[255])
{
  int val;
  cout<<mess;
  cin>>val;	
  
  return val;
}
void sVAL(int x,char mess[255]){ cout<<mess<<x<<endl; }






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

void insertV1(int v[][100],int n,int m)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
		
		v[i][j]=rand()%10;
	}
	}
}

void showV1(int v[][100],int n,int m)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++){
		
		
		cout<<setw(3)<<v[i][j];
		
	}
	cout<<endl;
	}
	
}

int SDM(int v[][100],int n,int m)
{
	int s=0;
	if(n==m)
	{
		
	for(int i=0;i<n;i++)
	{
		s+=v[i][i];
		s+=v[n-1-i][i];
		
	}

return s;
}
}

void c2l(int v[][100],int n,int m)
{
	int x=iVAL("enter linia x= ");
	int y=iVAL("enter linia y= ");
	for(int j=0,temp;j<m;j++)
	{
		temp=v[x][j];
		v[x][j]=v[y][j];
		v[y][j]=temp;
	
	}
	
}


int main()
{
	
int v[100][100],n=iVAL("Introdu N= "),m=iVAL("Introdu M= ");

insertV1(v,n,m);
showV1(v,n,m);
SDM(v,n,m);
int s=SDM(v,n,m);
sVAL(s,"suma totala = ");
c2l(v,n,m);
showV1(v,n,m);
 
  
  
  return 0;
}
