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
      vector <int> V1;
     vector <int> V2(5);
     vector <int> V3(10,777);
   
      for(int i=0; i< V1.size(); i++)
      cout<<" V1["<<i<<"]="<<V1[i]<<endl;
     
     for(int i=0; i< V2.size(); i++)
     cout<<" V2["<<i<<"]="<<V2[i]<<endl;
     
     cout<<endl;
     
     for(int i=0; i<V3.size(); i++)
     cout<<" V3["<<i<<"]="<<V3[i]<<endl;
   
     
     // V1[0]=100;   ERROR 
     // cout<<"  V1[0]="<<V1[0]<<endl;
      cout<<endl;
      
       V1.push_back(100);
       
       cout<<" V1[0]="<<V1[0]<<endl;
      
      
      //V1.begin()
      //V1.end()
     
      
       V1.insert(V1.begin(),777);

 

        cout<<endl;
     
     for(int i=0; i<V1.size(); i++)
     cout<<" V1["<<i<<"]="<<V1[i]<<endl;
       
       
      for(int i=0; i<10; i++)
         V1.insert( V1.begin() , i ); 
      // V1.insert( V1.end() , i );  
      
       for(int i=0; i<V1.size(); i++)
     cout<<" V1["<<i<<"]="<<V1[i]<<endl;
     
     
     // V1.rbegin() = end -1
     // V1.rend()   =  begin -1 
     
     
     //       -1       1   2   3 ...      N       N+1
     //          begin()             size()      end()
     // rend()-1                   rbegin()
   
     vector <int> V;
     
     if(V.empty()){  cout<<"  V is empty  "<<endl;     }
     
     
     cout<<"\n V.size() = "<<V.size()<<endl;
     
      V.assign(3,777);
      //int *V = new int[3];
            
     cout<<" V.size() = "<<V.size()<<endl;
          
     for(int i=0; i<V.size(); i++)
     cout<<" V["<<i<<"]="<<V[i]<<endl;
     
     
     vector <int> Vcopy_V(V);
     
    // Vcopy_V=V;
     // strcpy(Vcopy_V,V);
     
     for(int i=0; i<Vcopy_V.size(); i++)
     cout<<" Vcopy_V["<<i<<"]="<<Vcopy_V[i]<<endl;
     
     
     V.clear();
     cout<<" V.clear() =>  V.size()="<<V.size()<<endl;
     for(int i=0; i<V.size(); i++)
     cout<<" V["<<i<<"]="<<V[i]<<endl;
     
     cout<<endl;
     
     Vcopy_V.pop_back();
     cout<<"\n Vcopy_V.pop_back() "<<endl;
     
     for(int i=0; i<Vcopy_V.size(); i++)
     cout<<" Vcopy_V["<<i<<"]="<<Vcopy_V[i]<<endl;
     
     cout<<"\n Vcopy_V.resize(10) "<<endl;
     Vcopy_V.resize(10);
     
     for(int i=0; i<Vcopy_V.size(); i++)
     cout<<" Vcopy_V["<<i<<"]="<<Vcopy_V[i]<<endl;
     
     
     
     /*
     vector <int> abc;
     
     int a,b,c,n;
     
     cout<<"Enter n=";
     cin>>n;
     
     for(int i=0; i<n; i++)
     {
          a=rand()%10;
          b=rand()%10;
          c=rand()%10;
          
          cout<<" a="<<a<<" b="<<b<<" c="<<c<<" a+b-c="<<a+b-c<<endl;
          
          abc.push_back(a+b-c);
     }
     */
     
    
     vector <int> abc;
     
     int a,b,c,n, s=0;
     
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
     cout<<" s="<<s<<endl;
     cout<<endl;
     for(int i=0; i<abc.size(); i++)
     cout<<" abc["<<i<<"]="<<abc[i]<<endl;
     
     
    return 0;
}
   
