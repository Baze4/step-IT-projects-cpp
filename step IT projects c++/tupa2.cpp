 
#include <iostream>
using namespace std;

void citire(int mat[][10],int n)
{
   for(int i=0;i<n;i++)
   for(int j=0;j<n;j++)
   cin>>mat[i][j];
}

void intersectie(int a[][10], int n,int b[][10],int m){
int k1=0,p, x,ok,j, c[50],i;
for(i=0;i<n;i++){
for(j=0;j<n;j++){
   p=0; x=0;
    while(p<m)
      {  ok=0;
          while(x<m)
          {
              if(a[i][j]==b[p][x]) ok=1;
              if(ok) c[k1++]=a[i][j];
              x++;
          }
          p++;
      }
for(i=0;i<n;i++){
cout<<c[i]<<" ";
cout<<endl;}
}
}
}
int main()
{
   int n,m,mat[10][10],c[30],mat2[10][10];
   cout<<"n= ";cin>>n; //prima matrice
   citire(mat,n);
   cout<<"m= ";cin>>m;
   citire(mat2,m);//a doua matrice
   intersectie(mat,n,mat2,m);
return 0;
}
