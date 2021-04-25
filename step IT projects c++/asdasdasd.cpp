#include<iostream>

#include<cstdlib>

#include<string.h>

using namespace std;

int main()

{

/// string.h

//1. strlen(nume_sir) -

char sir[]="step 2020";

cout<<" strlen(sir)="<<strlen(sir)<<endl;

int i=0;

while(sir[i]!='\0')

{

i++;

}

cout<<" strlen="<<i<<endl;

//2. strcpy(S1,S2) -

char sirNOU[255];

if( strcpy(sirNOU,sir) ){ cout<<" sirNOU="<<sirNOU<<endl; }

else { cout<<" Error strcpy"<<endl; }

char SIR[255];

i=0;

while(sir[i]!='\0')

{

SIR[i]=sir[i];

i++;

}

SIR[i]=0;

cout<<" SIR="<<SIR<<endl;

//3. strcat(S1,S2) -

if( strcat(sirNOU,sir) ){ cout<<"strcat1 sirNOU="<<sirNOU<<endl; }

else { cout<<" Error strcpy"<<endl; }

if( strcat(sirNOU," ITstep ") ){ cout<<"strcat2 sirNOU="<<sirNOU<<endl; }

else { cout<<" Error strcpy"<<endl; }

i=0;
int j=strlen(SIR);
while(sirNOU[i]!='\0')

{

SIR[j+i]=sirNOU[i];

i++;
}

SIR[j+i]=0;

cout<<" SIR="<<SIR<<endl;

//4.strcmp

if(strcmp(sir,"step 2020")==0){cout<<"sirurile sunt egale";}
else{cout<<"sirurile nu sunt egale ";}


char sir1[]="step";
char sir2[]="step";

bool rez=0;
if(strlen(sir1)==strlen(sir2))
{
for(int i=0;i<strlen(sir);i++)
{
	if(sir1[i]==sir2[i]){rez=1;}
	
	else{
		rez=0;break;
	}
	
}
	
}
cout<<endl;
cout<<endl;
if(rez) {cout<<"sirurile sunt egale";}
else{cout<<"sirurile nu sunt egale ";}
cout<<endl;
cout<<endl;
if(strchr(sir,'a')){cout<<"simbolul a a fost gasit"<<endl;}
else{cout<<"nu a fost gasit "<<endl;}








return 0;

}
