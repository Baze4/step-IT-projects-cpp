#include <iostream>
#include <iomanip>
#include <conio.h>
#include <cstdlib>
using namespace std;

int main()
{ 
   int n,m;
   int a[100][100];
   cout<<"introdu n:";
   cin>>n;
   cout<<"introdu m:";
   cin>>m;
   
   


 for (int i=0;i<n;i++) 
	 {
	 if(n%2!=0 && n!=m) n=m; 
	 if(m%2!=0 && m!=n) m=n; 
	 if(n%2!=0 && m%2!=0) n=n-1;
	 if(n==0) n+=2;
	 if(n==1) n++;
    }

	 
	 
cout<<endl;

 
cout<<"n="<<n<<endl;
cout<<"m="<<m<<endl;
  for(int i=0;i<n;i++)
 {  for(int j=0;j<m;j++)
     { 
     a[i][j]=rand()%10;
	 cout<<setw(3)<<a[i][j];
	 }
cout<<endl;

 }

return 0;
}
