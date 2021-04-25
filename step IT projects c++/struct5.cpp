#include<iostream>

 

#include<cstdlib>

 

#include<iomanip>

 

#include<string.h>

 

#include<cmath>
#include<conio.h>

 

using namespace std;

 

/*

 

struct nume_struct

 

{

 

element 1;

 

element 2;

 

element 3;

 

...

 

element N;

 

};

 

*/

 

//student = nume, grupa, virsta, media

 

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
/*
void addNOTE(stud S[],int STUDENT)

 

{

 

if(STUDENT > 0 )

 

{

 

STUDENT--;

 

int x=insertINT("Enter nr note=");

 

S[i].media = S[i].media*S[i].NRnote;

 

for(int j=S[i].NRnote; j<S[i].NRnote+x ;j++)

 

{

 

cout<<"Studentul ["<<STUDENT+1<<"] Enter NRnote="<<x<<" nota["<<j+1<<"]=";

 

cin>>S[STUDENT].NOTA[j].nota ;

 

S[STUDENT].media+=S[STUDENT].NOTA[j].nota;

 

}

 

S[STUDENT].NRnote+=x;

 

S[STUDENT].media = S[STUDENT].media/S[STUDENT].NRnote;

 

}

 

else { cout<<" Error:: 404 student ["<<STUDENT<<"] not found"<<endl; }

 

}
*/

 

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
   if(S[i].media)

 

}

 

void showSTUD(stud *S)
{
    system("cls");
cout<<"-------------------------------------------------------------------------"<<endl;
cout<<setw(10)<<"NUME"<<setw(10)<<"GRUPA"<<setw(10)<<"ANI"<<setw(10)<<"MEDIA"<<endl;
cout<<"-------------------------------------------------------------------------"<<endl;

 

for(int i=0; i<N;i++)
{
cout<<setw(10)<<S[i].nume<<setw(10)<<S[i].grupa<<setw(10)<<S[i].virsta<<setw(10)<<S[i].media<<endl;
cout<<"-------------------------------------------------------------------------"<<endl;
}

 

}

 

double sumSTUD(stud *S, int n)
{
double s=0;
for(int i=0; i<n;i++)
{
s+=S[i].media;
}
return s;
}

 


   int meniu()
   {
          int key;
          system("cls");
          cout<<" \n\n\n\t\t  MENIU"<<endl;
          cout<<" \t\t  1. Insert stud"<<endl;
          cout<<" \t\t  2. Show stud"<<endl;
          cout<<" \t\t  3. Suma stud"<<endl;
          cout<<" \t\tESC. Exit"<<endl;
          
          key=_getch();
          
          
          return key;
   }

 


int main()
{
/*
stud *p= new stud;
p->virsta=10;
cout<<"virsta"<<p->virsta<<endl;
p->NOTA[0].nota=10;
cout<<"virsta"<<p->NOTA[0].nota<<endl;
*/


stud *p=new stud[100];


	
  
while(1)
{
    switch(meniu())
    {
        case 49:system("cls"); insertSTUD(p); system("pause");break;
        case 50:system("cls"); showSTUD(p); system("pause");break;
        case 51:system("cls"); cout<<"sum="<<sumSTUD(p,N); system("pause");break;
        case 27: exit(0);
    }
}

 


return 0;
}
