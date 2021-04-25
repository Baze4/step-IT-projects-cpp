#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

int main ()
{
int a[100][100];
int n,m;
int i,j;
int s=0;
int s1=0;
int sc=0;
int min=999999;
int max=-99999;

cout <<"n= ";
cin>>n;
	
for(i=0;i<n;i++)
{
	for(j=0;j<n;j++)
	{
		
//	cout<<"a["<<i<<"]["<<j<<"]= ";
//	cin>>a[i][j];

a[i][j]=rand()%10;
if (a[i][j]>max)max=a[i][j];
if (a[i][j]<min)min=a[i][j];

s+=a[i][j];


	}
	
}

for(i=0;i<n;i++)
{


for(j=0;j<n;j++)
{
    cout<<setw(3)<<a[i][j];
    s1+=a[i][j];
    sc+=a[j][i];
}
	 
	 cout<<"  s1= "<<s1<<"  sc= "<<sc<<endl;;

}


cout<<"max= "<<max<<endl;
cout<<"min "<<min<<endl;
cout<<"suma= "<<s<<endl;
	
return 0;

	
}

