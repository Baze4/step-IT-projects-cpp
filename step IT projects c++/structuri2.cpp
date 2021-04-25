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
	if(STUDENT>0){
	
	
	STUDENT--;
	S[STUDENT];
	int x=insertINT("Enter nr note= ");
	S[STUDENT].media=S[STUDENT].media*S[STUDENT].NRnote;
	
	for(int j=S[STUDENT].NRnote; j<S[STUDENT].NRnote+x;j++){
	
cout<<"Studentul["<<STUDENT+1<<"] Enter NRnote="<<x<<" nota["<<j+1<<"]=";

cin>>S[i].NOTA[j].nota;


S[STUDENT].media+=S[STUDENT].NOTA[j].nota;

}
   S[STUDENT].NRnote+=x;
	S[STUDENT].media=S[STUDENT].media / S[STUDENT].NRnote;
	
	}
	
	else {cout<<"Error:: ["<<STUDENT<<"] not found"<<endl;  }
	
	
	
}



void insertSTUD(stud S[], int n)

{

for(int i=0; i<n;i++)

{

cout<<"["<<i+1<<"] Enter nume=";

cin>>S[i].nume;

cout<<"["<<i+1<<"] Enter grupa=";

cin>>S[i].grupa;

cout<<"["<<i+1<<"] Enter virsta=";

cin>>S[i].virsta;

cout<<"["<<i+1<<"] Enter nr note=";

cin>>S[i].NRnote;

for(int j=0; j<S[i].NRnote;j++){
	
cout<<"Studentul["<<i+1<<"] Enter NRnote="<<S[i].NRnote<<" nota["<<j+1<<"]=";

cin>>S[i].NOTA[j].nota;

S[i].media+=S[i].NOTA[j].nota;

}
S[i].media=S[i].media / S[i].NRnote;
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





int main()

{
stud S[100];

int n=rand()%3;
insertSTUD(S,n);
showSTUD(S,n);

addNOTE(S,insertINT("Enter ID student= "));

return 0;

}
