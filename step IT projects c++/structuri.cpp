#include<iostream>

#include<cstdlib>

#include<iomanip>

#include<string.h>

#include<cmath>

using namespace std;

struct stud
{
	char nume[255];
	char grupa [255];
	int nota;
	
};

void insertSTD (stud S[],int n)
{
	for(int i=0;i<n;i++)
	{
	
	cout<<"Introdu numele studentului "<<endl;
	cin>>S[i].nume;
	cout<<"Introdu grupa studentului "<<endl;
	cin>>S[i].grupa;
	cout<<"Introdu nota studentului "<<endl;
	cin>>S[i].nota;
}
}


void showSTD (stud S[],int n)
{
	for(int i=0; i<n;i++)
	{
	cout<<" nume="<<S[i].nume<<endl;
    cout<<" grupa="<<S[i].grupa<<endl; 
    cout<<" nota="<<S[i].nota<<endl;
	}
}

void calc (stud S[],int n)
{
	int spoz=0;
	int sneg=0;
	for(int i=0;i<n;i++)
	{
		if(S[i].nota>=5)
		{
			spoz++;
		}
		else
		{
			sneg++;
		}
	}
	
	cout<<"note pozitive= "<<spoz<<endl;
	cout<<"note negative= "<<sneg<<endl;
}

void desNot (stud S[],int n)
{
	for(int i=1; i<=n-1; i++)
	{
		for(int j=i+1;j<=n;j++)
		{
			if(S[i].nota<S[j].nota){
				int temp= S[i].nota;
				S[i].nota=S[j].nota;
				S[j].nota=temp;
			}
		}
	}
}
void afishORD(stud S[],int n)
{
	cout<<"notele descrescatoare =";
	for(int i=0;i<n;i++)
	{
		cout<<" "<<S[i].nota<<endl;
	}
}

void numstud(stud S[],int n)
{
	bool ver;
	string grupe [10]{0};
	int studenti[10],nrgrupe=0;
	
	for(int i=0;i<n;i++)
	{
		ver=false;
		for(int j=0;j<nrgrupe+1;j++){
        if(S[i].grupa==grupe[j]){
        ver=true;
        studenti[j]++;
        }
	}
	if(ver==false){
    grupe[nrgrupe]=S[i].grupa;
    studenti[nrgrupe]++;
    nrgrupe++;
}

}

for(int i=0;i<nrgrupe;i++){
    cout<<"grupa = "<<grupe[i]<<"\t\t studenti ="<<studenti[i]<<endl;

}
}


void numlit(stud S[],int n){
int num[20]{0};
char temp[20];
for(int i=0;i<n;i++){
 int j=0;
   while(S[i].nume[j]!=0){
        temp[j]=S[i].nume[j];
        j++;}
        temp[j]=0;
    num[strlen(temp)-1]++;

}
for(int i=0;i<20;i++){
    if(num[i]!=0){
        cout<<"Nr de litere = "<<i<<"\nOameni cu acest numar de litere = "<<num[i]<<endl;
}
}}






int main ()
{
	stud S[100];
int n;
cout<<"introdu n= ";
cin>>n;
	
	insertSTD(S,n);
	showSTD(S,n);
	calc(S,n);
	desNot(S,n);
	afishORD(S,n);
	numstud(S,n);
	numlit(S,n);
}
