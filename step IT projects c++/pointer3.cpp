#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <conio.h>

using namespace std;

int main()
{
	srand(time(0));
int *n = new int;
int c=0;
int i,j;


cout<<"n= ";
cin>>*n;

int *p = new int[*n];
int *a = new int[*n];

for(int i=0; i<*n; i++)

{

*(p+i)=rand()%10;


}



for( i=0; i<*n; i++)
{
for(j=i+1;j<*n;j++)
{
	if(*(p+i)==*(p+j)) c++;

}
}

for( i=0; i<*n; i++)
{
	if(c>=3)
{
		*(a+i)=*(p+i);
}

}

cout<<"elementele salvate care se repeta sunt  "<<endl;
for( i=0; i<*n; i++)
{
for(j=i+1;j<*n;j++)
{
	if(*(a+i)==*(a+j))
	{
		cout << *(a+i)<< " "; 
	}

}
}



	
}
