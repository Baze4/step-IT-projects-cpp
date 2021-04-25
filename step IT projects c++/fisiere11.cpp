#include<iostream>
#include<cstdlib>
#include<iomanip>
#include<string.h>
#include<ctime>
#include<conio.h>

using namespace std;


int main()

{

char nume[100],nume1[100];

cout<<"nume script=";

cin>>nume;

cout<<"nume folder= ";
cin>>nume1;

int n=3;


strcat(nume,".cmd");

FILE *fp;

fp = fopen(nume,"w");

if( fp == NULL ){ cout<<" Error:: FILE "<<endl; }

else { cout<<" OK:: FILE "<<endl; }

for(int i=0;i<n;i++)

fprintf(fp,"md %s\ncd %s\n",nume1,nume1);

fclose(fp);
system(nume);

remove(nume);


return 0;
}
