#include <iostream>
#include <string>
#include<cstring>
 #include <iomanip>
 #include <conio.h>
 #include<cstdlib>

#include <vector>


using namespace std;
      
int main()
{   
 
     vector <int> abc;
     
     int a,b,c,n, s=0;
     int cMAX=1;
     int cMIN=0;
     int max=-9999999;
     int min=9999999;
     cout<<"Enter n=";
     cin>>n;
     
     for(int i=0; i<n; i++)
     {
          a=rand()%10;
          b=rand()%10;
          c=rand()%10;
          
          cout<<" a="<<a<<" b="<<b<<" c="<<c<<" a+b-c="<<a+b-c<<endl;
          
          abc.resize(i+1);
          abc[i]=a+b-c;
          
         s+=abc[i];
     }
     
     for(int i=0 ; i<n;i++)
     {
     	if(abc[i]>max)
		 {
		 max=abc[i]; 
		  cMAX=1;
		  }
		  else if(abc[i]==max)
     	{
     		cMAX++;
		 }
	 }
	 
	  for(int i=0 ; i<n;i++)
     {
     	if(abc[i]<min)
		 {
		 min=abc[i]; 
		  cMIN=1;
		  }
		  else if(abc[i]==min)
     	{
     		cMIN++;
		 }
	 }
	 
for(int i=0;i<n;i++)
	{		
		for(int j=i;j<n;j++)
		{
			if(abc[i]>abc[j])
			{
				int temp  =abc[i];
				abc[i]=abc[j];
				abc[j]=temp;
			}
		}
	}
	
    
     cout<<endl;
     for(int i=0; i<abc.size(); i++)
     cout<<" abc["<<i<<"]="<<abc[i]<<endl;
    cout<<" s="<<s<<endl;
    cout<<endl;
      cout<<"maximum = "<<max<<endl;
      cout<<"minimum = "<<min<<endl;
       cout<<endl;
      cout<<" sa repetat maximum de = "<<cMAX<<endl;
      cout<<" sa repetat minimum de = "<<cMIN<<endl;
       cout<<endl;
     cout<<"vectorul crescator  crescator = "<<endl;
     for(int i=0;i<n;i++)
     {
     	cout<<" "<<abc[i];
	 }
     
}

