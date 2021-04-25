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

float media;

int NRnote;

struct note

{

int nota;

struct dis

{ int disciplina;

}DIS;

}NOTA[50];

};

int N=0;

void save(stud *S)
{
	
	FILE *f;
	
	f=fopen("student192_binar.txt","w+b");
	
	fwrite(S,sizeof(stud), N, f);
	

		fprintf(stdout,"\n\n\tInformatia sa salvat cu succes\n");
	
	fclose(f);
}

void load(stud *S)
{
	
	FILE *f;   f=fopen("student192_binar.txt","r+b");
	
	N=fread(S,sizeof(stud), 100, f);

	fprintf(stdout,"\n\n\tInformatia s a extras cu succes\n");
	
	fclose(f);
}




int insertINT(char mess[]){int x;cout<<mess;cin>>x;return x;}

void insertSTUD(stud *S)

{

int i=N;

do

{

system("cls");

cout<<"["<<i+1<<"] Enter nume="; cin>>S[i].nume;

cout<<"["<<i+1<<"] Enter grupa="; cin>>S[i].grupa;

cout<<"["<<i+1<<"] Enter virsta="; cin>>S[i].virsta;

S[i].media=0;

int j=0;

do{

cout<<"Studentul ["<<i+1<<"] nota["<<j+1<<"]=";

cin>>S[i].NOTA[j].nota ;

S[i].media+=S[i].NOTA[j].nota;

j++;

cout<<"\n note Press ESC for exit or any key ......"<<endl;

}while(_getch()!=27);

S[i].NRnote=j;

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

int k1=0, k2=sp, pagina=0;

if( N > 0)

{

while(1)

{

system("cls");

cout<<"-------------------------------------------------------------------------"<<endl;

cout<<setw(10)<<"Nr."<<setw(10)<<"NUME"<<setw(10)<<"GRUPA"<<setw(10)<<"ANI"<<setw(10)<<"MEDIA"<<endl;

for(int i=k1; i<k2;i++)

{

cout<<"-------------------------------------------------------------------------"<<endl;

cout<<setw(10)<<i+1<<setw(10)<<S[i].nume<<setw(10)<<S[i].grupa<<setw(10)<<S[i].virsta<<setw(10)<<S[i].media<<endl;

}cout<<"-- pagina "<<ceil((double)k1/sp)+1<<" din "<<ceil((double)N/sp)<<"-------------------------------------------------"<<endl;

int KEY= _getch();

/* + */ if(KEY == 43){ k1+=sp; k2+=sp; if(k2 > N){ k1=N-sp; k2=N; } }

/* - */ else if(KEY == 45){ k1-=sp; k2-=sp; if(k1 < 0){ k1=0; k2=sp; } }

/*ESC*/ else if(KEY == 27){ break; }

}

}else { cout<<" Nu sunt date pentru a afisa informatia "<<endl; }

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

cout<<" \n\n\n\t\t MENIU"<<endl;

cout<<" \t\t 1. Insert stud"<<endl;

cout<<" \t\t 2. Show stud"<<endl;

cout<<" \t\t 3. Suma stud"<<endl;

cout<<" \t\t 4. Max Min stud"<<endl;

cout<<" \t\t 5. Cautare stud"<<endl;

cout<<" \t\t 6. Editare stud"<<endl;

cout<<" \t\t 7. Salveaza stud"<<endl;

cout<<" \t\t 8. Incarca stud"<<endl;

cout<<" \t\tESC. Exit"<<endl;

key=_getch();

return key;

}

int meniuCAUTA()

{

int key;

system("cls");

cout<<" \n\n\n\t\t MENIU CAUTARE "<<endl;

cout<<" \t\t 1. Cautare dupa nume"<<endl;

cout<<" \t\t 2. Cautare dupa grupa"<<endl;

cout<<" \t\t 3. Cautare dupa medie"<<endl;

cout<<" \t\t ESC. Exit"<<endl;

key=_getch();

return key;

}

void cautaNUME(stud *S)

{

system("cls");

char numeCAUTA[255];

cout<<" Enter nume :";

cin>>numeCAUTA;

cout<<"Cutarea dupa NUME --------------------------------------------------------------"<<endl;

cout<<setw(10)<<"Nr."<<setw(10)<<"NUME"<<setw(10)<<"GRUPA"<<setw(10)<<"ANI"<<setw(10)<<"MEDIA"<<endl;

for(int i=0; i<N;i++)

{

if( strcmp( S[i].nume ,numeCAUTA) == 0 )

{

cout<<"-------------------------------------------------------------------------"<<endl;

cout<<setw(10)<<i+1<<setw(10)<<S[i].nume<<setw(10)<<S[i].grupa<<setw(10)<<S[i].virsta<<setw(10)<<S[i].media<<endl;

}

}

system("pause");

}

void cautaGRUPA(stud *S)

{

system("cls");

char numeCAUTA[255];

cout<<" Enter grupa :";

cin>>numeCAUTA;

cout<<"Cutarea dupa GRUPA --------------------------------------------------------------"<<endl;

cout<<setw(10)<<"Nr."<<setw(10)<<"NUME"<<setw(10)<<"GRUPA"<<setw(10)<<"ANI"<<setw(10)<<"MEDIA"<<endl;

for(int i=0; i<N;i++)

{

if( strcmp( S[i].nume ,numeCAUTA) == 0 )

{

cout<<"-------------------------------------------------------------------------"<<endl;

cout<<setw(10)<<i+1<<setw(10)<<S[i].nume<<setw(10)<<S[i].grupa<<setw(10)<<S[i].virsta<<setw(10)<<S[i].media<<endl;

}} system("pause");

}

void cautaMEDIE(stud *S)

{

system("cls"); double MED; cout<<" Enter media :"; cin>>MED;

cout<<"Cutarea dupa GRUPA --------------------------------------------------------------"<<endl;

cout<<setw(10)<<"Nr."<<setw(10)<<"NUME"<<setw(10)<<"GRUPA"<<setw(10)<<"ANI"<<setw(10)<<"MEDIA"<<endl;

for(int i=0; i<N;i++)

{

if( S[i].media == MED )

{

cout<<"-------------------------------------------------------------------------"<<endl;

cout<<setw(10)<<i+1<<setw(10)<<S[i].nume<<setw(10)<<S[i].grupa<<setw(10)<<S[i].virsta<<setw(10)<<S[i].media<<endl;

}

}

system("pause");

}

void cauta(stud *S)

{

bool xxx=false;

while(1){

system("cls");

switch(meniuCAUTA())

{

case 49: cautaNUME(S); break;

case 50: cautaGRUPA(S); break;

case 51: cautaMEDIE(S); break;

case 27: xxx=true;

}

if(xxx) break;

}

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

void edit(stud *S)

{

system("cls");

int ID; bool xxx = false;

do

{

cout<<" Enter stud ID=";

cin>>ID;

if( ID > 0 && ID <= N ){ ID--; xxx=true; }

else { cout<<" ID inexistent "<<endl; }

}while(xxx);

cout<<" Doriti sa modificati NUMELE ? yes/no"<<endl;

if( _getch() == 'y' || _getch() == 'Y' ) { cout<<"Student ["<<ID+1<<"] NUMELE="<<S[ID].nume<<" in Enter nume=";cin>>S[ID].nume; }

cout<<" Doriti sa modificati GRUPA ? yes/no"<<endl;

if( _getch() == 'y' || _getch() == 'Y' ) { cout<<"Student ["<<ID+1<<"] GRUPA="<<S[ID].grupa<<" in Enter nume=";cin>>S[ID].grupa; }

cout<<" Doriti sa modificati VIRSTA ? yes/no"<<endl;

if( _getch() == 'y' || _getch() == 'Y' ) { cout<<"Student ["<<ID+1<<"] VIRSTA="<<S[ID].virsta<<" in Enter nume=";cin>>S[ID].virsta ; }

}

int main()

{

stud *p = new stud[100];

cout<<"sizeof(stud) = "<<sizeof(stud)<<endl;

system(" pause");

while(1)

{

switch(meniu())

{

case 49:system("cls"); insertSTUD(p); system("pause"); break;

case 50:system("cls"); showSTUD(p); system("pause"); break;

case 51:system("cls"); sumSTUD(p); system("pause"); break;

case 52:system("cls"); show_max_min_STUD(p); system("pause"); break;

case 53:system("cls"); cauta(p); system("pause"); break;

case 54:system("cls"); edit(p); system("pause"); break;

case 55:system("cls"); save(p); system("pause"); break;

case 56:system("cls"); load(p); system("pause"); break;



case 27: exit(0);

}

}

return 0;

}
