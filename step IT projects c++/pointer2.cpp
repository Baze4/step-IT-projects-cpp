#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

int main ()

{
	
	int a[100];
	int *p[100];
	int b[100];
	int *b1[100];
	int c[100];
	int *c1[100];
	int n;
	int i=0;
	int temp;
	cin>>n;
	
	
	  for (int i = 0; i < n; i++)
	  {
	  	
	 p[i] = &a[i];

	  }
	  
	  
	   for (int i = 0; i < n; i++) 
	   {
    
    *p[i]=rand()%10;
}
	
	
	 for (int i = 0; i < n; i++) {
      cout << "[" << i << "] = ";
      cout << *p[i] << endl;
   }
   
   
   
	 for(int i=0 ; i<n/2 ; i++)
	 {
	 	temp=*p[i];
	 	*p[i]=*p[n-i-1];
	 	*p[n-i-1]=temp;
	 	
	 }
	 
	  for(int i=0 ; i<n ; i++)
	  {
	  	cout<<*p[i];
	  }
	
}

