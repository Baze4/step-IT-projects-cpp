#include<iostream>

#include<cstdlib>

#include<iomanip>

#include<string.h>

#include<cmath>

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

}NOTA[50];

};

int insertINT(char mess[])

{

int x;

cout<<mess;

cin>>x;

return x;

}

void addNOTE(stud S[],int STUDENT)

{

if(STUDENT > 0 )

{

STUDENT--;

int x=insertINT("Enter nr note=");

S[STUDENT].media = S[STUDENT].media*S[STUDENT].NRnote;

for(int j=S[STUDENT].NRnote; j<S[STUDENT].NRnote+x ;j++)

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

void insertSTUD(stud S[], int n)

{
	int r;

for(int i=0; i<n;i++)

{

cout<<"["<<i+1<<"] Enter nume=";

cin>>S[i].nume;

cout<<"["<<i+1<<"] Enter grupa=";

cin>>S[i].grupa;

cout<<"["<<i+1<<"] Enter virsta=";

cin>>S[i].virsta;

cout<<"doresti sa adaugi note ? 1=Pentru da si 2=pentru nu"<<endl;
cin>>r;
if(r==1)
{

cout<<"["<<i+1<<"] Enter nr. note=";

cin>>S[i].NRnote;

S[i].media=0;

for(int j=0; j<S[i].NRnote;j++)

{

cout<<"Studentul ["<<i+1<<"] Enter NRnote="<<S[i].NRnote<<" nota["<<j+1<<"]=";

cin>>S[i].NOTA[j].nota ;

S[i].media+=S[i].NOTA[j].nota;

}

S[i].media = S[i].media/S[i].NRnote;

}
}

}

void showSTUD(stud S[], int n)

{

for(int i=0; i<n;i++)

{

cout<<" nume="<<S[i].nume<<endl;

cout<<" grupa="<<S[i].grupa<<endl;

cout<<" virsta="<<S[i].virsta<<endl;

cout<<" media="<<S[i].media<<endl;

}

}

double sumSTUD(stud S[], int n)

{

double s=0;

for(int i=0; i<n;i++)

{

s+=S[i].media;

}

return s;

}

int main()

{

int x;
int n;
cout<<"\t\t\t MENIU tipa bezbashenii \t\t\t"<<endl;
	cout<<"introdu nr de studenti= ";
cin>>n;
	
	while(1)
{
	
	stud S[100];

cout<<"\t\tAlege optiunea\t\t "<<endl;


cout<<"1.Inserarea studentilor"<<endl;
cout<<"2.Arata studentii "<<endl;
cout<<"3.Suma notelor "<<endl;
cout<<"4.Adauga note studentilor "<<endl;
cout<<"5.EXIT\n"<<endl;

cin>>x;


switch (x)
{
	case 1: insertSTUD(S,n);break;
	case 2: showSTUD(S,n);break;
	case 3: cout<<" s="<<sumSTUD(S,n);break;
	case 4: addNOTE(S,insertINT("Introdu ID studentului ="));break;
	case 5: cout<<"Iesire din program ..."<<endl; exit(0);
	default : cout<<"nu ati introdus alegerea corecta";
	
}

	
}

}
