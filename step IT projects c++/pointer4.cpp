#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <conio.h>
using namespace std;

int main()
{
 int *n=new int;
 cout<<" enter n = ";
 cin>>*n;

	
	int *p=new int[*n];
    

	
	
	for(int i=0;i<*n;i++)
	{
        *(p+i)=rand()%10+1;
        cout<<setw(3)<<*(p+i);
		
	}
	
 cout<<endl;
 cout<<endl;


int *B1=new int[1];
*B1=0;
int *Main=new int[1];//element pare 
		

		for(int i=0;i<*n;i++)
	{
	
        if(*(p+i)%2==0)
		{   
	        
			 int *rezerv=new int[*B1+1];
			 
        	for(int k=0;k<*B1;k++)
        	{
        		*(rezerv+k)=*(Main+k);
			}
			delete[] Main;
			
			int *Mainn=new int [*B1+1];
			*(Mainn+*B1)=*(p+i);
			for(int k=0; k<*B1; k++)
			{
				*(Mainn+k)=*(rezerv+k);
			}
			delete []rezerv;
			
			
			*B1+=1;
             Main=Mainn; 
			
	}

	}
	




	

	
	
}
