#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <ctime>
#include <math.h>

using namespace std;
 
int main()
{
	 srand(time(0));
	 
	 
  int a,b,c,n;
  
  
    cout<<" n=";
    cin>>n;
  
  int v[1000];
  
  for(int i=0; i<n; i++)
  {
  	a=rand()%10+1;
  	b=rand()%10+1;
  	c=rand()%20+1;
  	
  	cout<<" a="<<a<<" b="<<b<<" c="<<c<<endl;
  	
	  v[i]=a+b-c;
  	
  	cout<<" v["<<i<<"]="<<v[i]<<endl; 	
  }
  
   int x, cx=0;
  cout<<" Enter val =";
  cin>>x;
    
  int s=0;
  for(int i=0; i<n; i++)
  {
  	if( i%2==0 && v[i]>0 ) s+=v[i];
  	
  	if( v[i]==x ) cx++;
  	
  }
  
  cout<<" s="<<s<<endl;
  
return 0;
  
	
}
