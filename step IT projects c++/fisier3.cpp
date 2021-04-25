#include<iostream>
#include<string.h>
#include<cstdlib>

 

using namespace std;
    
    /*
       fprintf( file_pointer, " SETARE TIP MEMORIE ", var1,var2,...,varN)
        fscanf( file_pointer, " SETARE TIP MEMORIE ", &var1,&var2,...,&varN)
        
        
        stdout - 
        
        
        
        %d - int 
        %f - flaot
        %c - char
        %s - char[255]
        
        
        
    */

 

struct stud
{
    char nume[100];
    char grupa[100];
    int ani;
    float media;
}S[10];

 

int main()
{
  /* FILE *fp;
  
   
   if( (fp = fopen("student.step2020","w") ) == NULL ){ cout<<" student Error:: FILE "<<endl; exit(0); }
   else { cout<<"student OK:: FILE "<<endl; }

 

   for(int i=0; i<2; i++)    
   {
    cin>>S[i].nume;
    cin>>S[i].grupa;
    cin>>S[i].ani;
    cin>>S[i].media;
   }
    
    for(int i=0; i<2; i++)    
   {
     fprintf(stdout," Nume=%s Grupa=%s Ani=%d Media=%f\n", S[i].nume, S[i].grupa, S[i].ani, S[i].media);
     fprintf(fp,"%s %s %d %f\n",  S[i].nume, S[i].grupa, S[i].ani, S[i].media);
   }
   
    fclose(fp);
    */
        
 FILE *fp;
     
   if( (fp = fopen("Student.txt","r") ) == NULL ){ cout<<" Student.txt Error:: FILE "<<endl; exit(0); }
   else { cout<<"Student.txt OK:: FILE "<<endl; }
    
    int i=0;
    while(!feof(fp))
    {  
       //fprintf (fp,"%s %s %d %f\n",  S[i].nume, S[i].grupa, S[i].ani, S[i].media);
        fscanf (fp,"%s %s %d %f",  &S[i].nume, &S[i].grupa, &S[i].ani, &S[i].media);
        i++;
    }
    
     for(int i=0; i<2; i++)    
   {
     fprintf(stdout," Nume=%s Grupa=%s Ani=%d Media=%f\n", S[i].nume, S[i].grupa, S[i].ani, S[i].media);
   }
    
return 0;
}
