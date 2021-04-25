#include<iostream>
#include<string.h>
#include<cstdlib>

using namespace std;


struct stud
{
    char numele[100];
    char grupa[100];
    int virsta;
    float media;
}S[10];


int main()
{


  /*
     fprintf(file_pointer,"setare tip memorie",var1,var2,....,varN)
     fscanf (file_ponter,"setare tip memorie",&var1,&var2,....,&varN)
     */
   
   

   FILE *fp;
 

   
   if((fp = fopen("Student.txt","w") ) == NULL ){ cout<<" Error:: FILE "<<endl; exit(0); }
   else { cout<<"Student.txt:: FILE "<<endl; } 

for (int i=0;i<2;i++)
{

cin>>S[i].numele;
cin>>S[i].grupa;
cin>>S[i].virsta;
cin>>S[i].media;

}
for (int i=0;i<2;i++)
{

fprintf(stdout,"Numele= %s grupa=%s virsta=%d media=%f\n",S[i].numele,S[i].grupa,S[i].virsta,S[i].media);
fprintf(fp,"%s %s %d %f\n",S[i].numele,S[i].grupa,S[i].virsta,S[i].media);
}
   fclose(fp);
   
   
   
   
   
    
    
return 0;
}
