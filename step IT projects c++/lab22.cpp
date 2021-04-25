#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
	srand (time(0));
	int v[100];      
	v[0]=4;
	 for (int i=1; i<v[0]*4; i+=4)
	{
		v[i+0]=rand()%10+1;
		v[i+1]=rand()%10+1;
		v[i+2]=rand()%10+1;
		v[i+3]=v[i+0]+v[i+1]-v[i+2];
		
		
		cout<<"\nv["<<i+0<<"]="<<v[i+0];
		cout<<"\nv["<<i+1<<"]="<<v[i+1];
		cout<<"\nv["<<i+2<<"]="<<v[i+2];
		cout<<"\nv["<<i+3<<"]="<<v[i+3];
		
		
		
	}
	
	
	return 0;
}
