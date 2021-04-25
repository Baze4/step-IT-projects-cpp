#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

int main(){
	
	srand(time(0));
	int *n = new int; 
	cin>>*n;
	int *wow = new int[*n];
	int *imp = new int[1];
	int *cimp = new int;
	*cimp=0;
	int *par = new int[1];
	int *cpar = new int;
	*cpar=0;
	
	
	for(int i=0;i<*n;i++){
		*(wow+i)=rand()%10;
		cout<<setw(3)<<*(wow+i);
		
		
		if(*(wow+i)%2!=0){
			*cimp=*cimp+1;
		*(imp+*cimp-1)=*(wow+i);
		int	*tempimp= new int[*cimp];
		for(int j=0;j<*cimp;j++)
		*(tempimp+j)=*(imp+j);
		delete[] imp;
		int *imp = new int[*cimp+1];
		for(int j=0;j<*cimp;j++)
		*(imp+j)=*(tempimp+j);
		delete[] tempimp;
		}
		
		if(*(wow+i)%2==0){
		*cpar=*cpar+1;
		*(par+*cpar-1)=*(wow+i);
		int	*temppar= new int[*cpar];
		for(int j=0;j<*cpar;j++)
		*(temppar+j)=*(par+j);
		delete[] par;
		int *par = new int[*cpar+1];
		for(int j=0;j<*cpar;j++)
		*(par+j)=*(temppar+j);
		delete[] temppar;
		}
		
		
		
		
		}
	
			cout<<endl<<endl;
	for(int i=0;i<*cimp;i++)
	cout<<setw(3)<<*(imp+i);
	cout<<endl;
		for(int i=0;i<*cpar;i++)
	cout<<setw(3)<<*(par+i);
	
}
