#include <iostream>
#include <iomanip>
#include <conio.h>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{  srand(time(0));
   int n,m,M[100][100];
   cout<<"enter n:";
   cin>>n;
   cout<<"enter m:";
   cin>>m;
   
   



 for (int i=0;i<2;i++) 
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
     M[i][j]=rand()%10;
	 cout<<setw(3)<<M[i][j];
	 }
cout<<endl;

 }

return 0;
}
