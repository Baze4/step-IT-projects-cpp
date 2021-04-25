#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <conio.h>
#include <ctime>

using namespace std;
	
	int main()
	{
		srand(time(0));
		int a[100][100],b[100][100],maxarr[100];
		int i,j;
		int c=0;
		int m1=a[0][0];
		int x;
		int n;
		
		cout<<"Introducet n";
		cin>>n;
		cout<<"introdu x";
		cin>>x;
		
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				a[i][j]=rand()%10;
				b[i][j]=a[i][j];
				
			}
		}
		
				for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				cout<<setw(3)<<a[i][j];				
			}
			cout<<endl;
		}
		
		
		for(int q=0,max=0,maxi,maxj;q<x;q++){
	for(i=0;i<n;i++)
		{for(j=0;j<n;j++){
		if(max<b[i][j]){
			max=b[i][j];
			maxi=i;
			maxj=j;
		}
		} 	
 		}
		b[maxi][maxj]=-1;
		maxarr[q]=max;		
		max=-1;		}
		
	for(int i=0;i<x;i++)
	cout<<setw(3)<<maxarr[i];
		
		
	}
