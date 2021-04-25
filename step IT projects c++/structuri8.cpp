#include<iostream>
#include<cstdlib>
#include<iomanip>
#include<string.h>
#include<cmath>
#include<conio.h>

 

using namespace std;

 
struct stud
{
char nume[255];
char grupa[255];
int virsta;
double media;
int NRnote;
struct note
{
int nota;


 struct dis
 {
     int disciplina;
 }DIS;
  
}NOTA[50];
};

int N=0;

int insertINT(char mess[])
{
int x;
cout<<mess;
cin>>x;
return x;
}


void insertSTUD(stud *S)
{
    int i=N;
do
{
system("cls");    
    
cout<<"["<<i+1<<"] Enter nume=";     cin>>S[i].nume;
cout<<"["<<i+1<<"] Enter grupa=";    cin>>S[i].grupa;
cout<<"["<<i+1<<"] Enter virsta=";   cin>>S[i].virsta;

S[i].media=0;

int j=0;
do{
    cout<<"Studentul ["<<i+1<<"] nota["<<j+1<<"]=";
    cin>>S[i].NOTA[j].nota ;
    S[i].media+=S[i].NOTA[j].nota; 
  j++;  
  cout<<"\n note  Press ESC for exit or any key ......"<<endl;
}while(_getch()!=27);

S[i].NRnote=--j;
S[i].media = S[i].media/S[i].NRnote;
  i++;
  cout<<"\n student Press ESC for exit or any key ......"<<endl;
  
}while(_getch()!=27);
   N=i;
}
void showSTUD(stud *S)
{
    system("cls");
    
    int sp=2;
    int k1=0, k2=sp;
    
if( N > 0)    
{

while(1)
{    
    system("cls");
cout<<"-------------------------------------------------------------------------"<<endl;
cout<<setw(10)<<"Nr."<<setw(10)<<"NUME"<<setw(10)<<"GRUPA"<<setw(10)<<"ANI"<<setw(10)<<"MEDIA"<<endl;
cout<<"-------------------------------------------------------------------------"<<endl;
for(int i=k1; i<k2;i++)
{
cout<<setw(10)<<i+1<<setw(10)<<S[i].nume<<setw(10)<<S[i].grupa<<setw(10)<<S[i].virsta<<setw(10)<<S[i].media<<endl;
cout<<"-------------------------------------------------------------------------"<<endl;
}
/// + -
  
           int KEY= _getch();
           
   /* + */      if(KEY == 43){ k1+=sp; k2+=sp;  if(k2 > N){ k1=N-sp; k2=N;  } }
   /* - */ else if(KEY == 45){ k1-=sp; k2-=sp;  if(k1 < 0){ k1=0; k2=sp;  } }
   /*ESC*/ else if(KEY == 27){ break; }

 


}

 

}else { cout<<" Nu sunt date pentur a afisa informatia"<<endl; }

 

}

 

void sumSTUD(stud *S)
{
double s=0;
for(int i=0; i<N;i++)
{
s+=S[i].media;
}
cout<<" Suma mediilor = "<<s<<endl;
}

 


   int meniu()
   {
          int key;
          system("cls");
          cout<<" \n\n\n\t\t  MENIU"<<endl;
          cout<<" \t\t  1. Insert stud"<<endl;
          cout<<" \t\t  2. Show stud"<<endl;
          cout<<" \t\t  3. Suma stud"<<endl;
          cout<<" \t\t  4. Max Min stud"<<endl;
          cout<<" \t\tESC. Exit"<<endl;
          
          key=_getch();
          
          
          return key;
   }

 

 

void show_max_min_STUD(stud *S)
{

 

int max,max_i;
 max=S[0].media;
int min,min_i;
 min=S[0].media;
for(int i=1; i<N;i++)
{
   if(S[i].media>max)
   {
     max=S[i].media;
        max_i=i; 
   } 
   if(S[i].media<min)
   {
     min=S[i].media;
        min_i=i; 
   } 
}    
    system("cls");
cout<<"-------------------------------------------------------------------------"<<endl;
cout<<setw(10)<<"NUME"<<setw(10)<<"GRUPA"<<setw(10)<<"ANI"<<setw(10)<<"MEDIA"<<endl;
cout<<"-------------------------------------------------------------------------"<<endl;

 

cout<<setw(10)<<S[max_i].nume<<setw(10)<<S[max_i].grupa<<setw(10)<<S[max_i].virsta<<setw(10)<<S[max_i].media<<endl;
cout<<"-------------------------------------------------------------------------"<<endl;
cout<<setw(10)<<S[min_i].nume<<setw(10)<<S[min_i].grupa<<setw(10)<<S[min_i].virsta<<setw(10)<<S[min_i].media<<endl;
cout<<"-------------------------------------------------------------------------"<<endl;
}

 

int main()
{

    stud *p = new stud[100];

 

while(1)
{
    switch(meniu())
    {
        case 49:system("cls"); insertSTUD(p); system("pause"); break;
        case 50:system("cls"); showSTUD(p);   system("pause"); break;
        case 51:system("cls"); sumSTUD(p);  system("pause"); break;
        case 52:system("cls"); show_max_min_STUD(p);  system("pause"); break;
        case 27: exit(0);
    }
}

 


return 0;
}
