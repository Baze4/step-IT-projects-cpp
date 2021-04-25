#include <iostream>
#include <string.h>
#include <cstdlib>
#include <cmath>
#include <conio.h>

using namespace std;

struct stud{
char nume[255];
char grupa[255];
int virsta;
int numarNote;
double media;

struct grades{
    int nota;
}note[50];
};
int numStud=0;

void draw(){
    system("cls");
cout<<"1.Afiseaza studenti\n";
cout<<"2.Adaugarea studentilor\n";
cout<<"3.Adaugarea note\n";
cout<<"4.Stergerea studentilor\n";
cout<<"5.Cautare studenti\n";
cout<<"6.Modificarea informatie\n";
cout<<"ESC.Iesire\n";
}
void afisStud(stud[]);
void insertStud(stud[]);
void adaugNote(stud[]);
void deleteStud(stud[]);
void cautare(stud[]);
void modif(stud[]);

int main(){
stud s[50];

for(;;){
draw();
    switch(getch()){

    case 49:
    {
        afisStud(s);
    }break;

    case 50:
    {
        insertStud(s);
    }break;

    case 51:{
        adaugNote(s);
    }break;
    case 52:{
    deleteStud(s);
    }break;
    case 53:{
    cautare(s);}break;
    case 54:{
    modif(s);}break;
    case 27:{
    return 0;}
    break;}
}

}

void afisStud(stud s[]){
system("cls");
    if(numStud==0)
        cout<<"Mai intai introduceti studenti.\n";
    else
        for(int i=0;i<numStud;i++){

    cout<<"\t\t\tStudentul "<<i+1<<endl;
    cout<<"Nume "<<s[i].nume<<endl;
    cout<<"Grupa "<<s[i].grupa<<endl;
    cout<<"Varsta "<<s[i].virsta<<endl;
    cout<<"Media "<<s[i].media<<endl;


    }
      cout<<"Apasati pe o tasta pentru a continua";
    getch();
}





void insertStud(stud s[]){
    system("cls");
    int n;
    cout<<"Cati studenti doriti sa introduceti?";
    cin>>n;

for(int i=numStud;i<numStud+n;i++){
        cout<<"\t\t\tStudent "<<i+1<<endl;
    cout<<"Nume:";
        cin>>s[i].nume;
     cout<<"Grupa:";
         cin>>s[i].grupa;
          cout<<"Varsta:";
          cin>>s[i].virsta;
           cout<<"Numarul de note:";
          cin>>s[i].numarNote;
          s[i].media=0;

          for(int j=0;j<s[i].numarNote;j++){

                cout<<"Nota "<<j+1<<":";
                cin>>s[i].note[j].nota;
                s[i].media+=s[i].note[j].nota;
          }
          s[i].media/=s[i].numarNote;

}
    numStud+=n;
}

void adaugNote(stud s[]){
     system("cls");
     if(numStud!=0){
cout<<"1.Adaugati note \nESC.Meniul principal\n";
switch(getch()){

    case 49:{
for(;;){
    short n;
    char ch;
    cout<<"Introduceti numarul studentului ori 0 pentru a iesi la meniu:";
    cin>>n;
    system("cls");
    if(n!=0){
    n-=1;
    s[n].media=s[n].media*s[n].numarNote;
    cout<<"Apasati ESC pentru a iesi la meniul adaugare note\nalt buton pentru a continua introducerea\n";
    do{
            cout<<"Nota "<<s[n].numarNote+1<<":";
            cin>>s[n].note[s[n].numarNote].nota;
            s[n].media+=s[n].note[s[n].numarNote].nota;
            s[n].numarNote++;
            ch=getch();
                            }
    while(ch!=27);
    system("cls");
  s[n].media/=s[n].numarNote;
    }

    else
    break;}
}
break;
    case 27:{    system("cls");}

}}
else{
    cout<<"introduceti studenti dintai";
    getch();}
}
void deleteStud(stud s[]){
    system("cls");
cout<<"Alegeti studentul care doriti sa fie sters:";
short n;
cin>>n;
if(n<numStud&&n>0){
n=n-1;
for(int i=n;i<numStud;i++){
    s[i+1]=s[i];
}
numStud--;}
else{
    cout<<"studentul nu exista, press any key to continue";
    getch();}
}


void cautare(stud s[]){
    system("cls");
    if(numStud!=0){
for(;;){
    system("cls");
        cout<<"1.Cautare dupa medie\n";
        cout<<"2.Cautare dupa nume\n";
        cout<<"3.Cautare dupa grupa\n";
        cout<<"ESC.Iesire\n";
    switch(getch()){
    case 49:{
        cout<<"Introduceti media:";
    double temp;
    cin>>temp;
    for(int i=0;i<numStud;i++){
        if(trunc(s[i].media)==trunc(temp))
            cout<<"Student "<<i<<endl;
            cout<<"Nume:"<<s[i].nume;
            cout<<"Media:"<<s[i].media;
            cout<<"Grupa:"<<s[i].grupa;
    }

    }
    break;
    case 50:{
        cout<<"Introduceti nume:";
        char temp[255];
        cin>>temp;
    for(int i=0;i<numStud;i++){
    if(strstr(s[i].nume,temp)!=NULL){
            cout<<"Student "<<i<<endl;
            cout<<"Nume:"<<s[i].nume;
            cout<<"Media:"<<s[i].media;
            cout<<"Grupa:"<<s[i].grupa;
    }

    }
    }
    break;
    case 51:{
        cout<<"Introduceti grupa:";
        char temp[255];
        cin>>temp;
        for(int i=0;i<numStud;i++){
        if(strstr(s[i].grupa,temp)!=NULL){
            cout<<"Stud "<<i<<endl;
            cout<<"Nume:"<<s[i].nume;
            cout<<"Media:"<<s[i].media;
            cout<<"Grupa:"<<s[i].grupa;
    }

    }
    }
    break;
    case 27:{break;}
    break;
    }


}

}
else
    cout<<"introduceti studenti dintai"<<endl;
system("pause");
}
void modif(stud s[]){
   system("cls");
   for(;;){
        cout<<"1.Schimbarea notelor\n";
        cout<<"2.Schimbarea numelui\n";
        cout<<"3.Schumbarea grupei\n";
    }}

