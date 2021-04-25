#include<iostream>
#include<iomanip>
#include<cstdlib>
#include <vector>

 

using namespace std;

 

   
int main()
{    

 

     int n,m;
     
     cout<<"Enter n =";
     cin>>n;
     
     cout<<"Enter m =";
     cin>>m;
     
     //  M[n][m] , NxM
     vector < vector <int> > Matrix(n, vector<int>(m));
     
     for(int i=0; i<n; i++)
     {
         for(int j=0; j<m; j++)
         {
            Matrix[i][j] = rand()%10;
         }
     }
     
     for(int i=0; i<n; i++)
     {
         for(int j=0; j<m; j++)
         {
           cout<<setw(3)<<Matrix[i][j];
         }
         cout<<endl;
     }
     
     
     cout<<" M="<<Matrix[0].size()<<endl;
     
     cout<<endl;
     
        for(int j=0; j<n; j++)
         {
           cout<<setw(3)<<Matrix[j][j];
         }
     
     cout<<endl;
     
        for(int j=0; j<n; j++)
         {
           cout<<setw(3)<<Matrix[(n-1)-j][j];
         }    
         
 }
