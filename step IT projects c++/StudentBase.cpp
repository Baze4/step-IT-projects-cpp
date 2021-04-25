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
cout<<"1.Show students\n";
cout<<"2.Add students\n";
cout<<"3.Add grades\n";
cout<<"4.Delete students\n";
cout<<"5.Search students\n";
cout<<"6.Change info\n";
cout<<"ESC.Exit\n";
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
        cout<<"First of all you have to add students\n";
    else
        for(int i=0;i<numStud;i++){

    cout<<"\t\t\tStudent "<<i+1<<endl;
    cout<<"Name "<<s[i].nume<<endl;
    cout<<"Group "<<s[i].grupa<<endl;
    cout<<"Age "<<s[i].virsta<<endl;
    cout<<"Avg grade "<<s[i].media<<endl;


    }
      cout<<"Press smth";
    getch();
}





void insertStud(stud s[]){
    system("cls");
    int n;
    cout<<"How many students you want to add?";
    cin>>n;

for(int i=numStud;i<numStud+n;i++){
        cout<<"\t\t\tStudent "<<i+1<<endl;
    cout<<"Name:";
        cin>>s[i].nume;
     cout<<"Group:";
         cin>>s[i].grupa;
          cout<<"Age:";
          cin>>s[i].virsta;
           cout<<"Number of grades";
          cin>>s[i].numarNote;
          s[i].media=0;

          for(int j=0;j<s[i].numarNote;j++){

                cout<<"Grade "<<j+1<<":";
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
cout<<"1.Add grades \nESC.Go back to main menu \n";
switch(getch()){

    case 49:{
for(;;){
    short n;
    char ch;
    cout<<"IEnter the number of student or press 0 to menu:";
    cin>>n;
    system("cls");
    if(n!=0){
    n-=1;
    s[n].media=s[n].media*s[n].numarNote;
    cout<<"Esc for going back to adding grades/another button....\n";
    do{
            cout<<"Grade "<<s[n].numarNote+1<<":";
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
    cout<<"First of all add students";
    getch();}
}
void deleteStud(stud s[]){
    system("cls");
cout<<"Select the student you want to delete:";
short n;
cin>>n;
if(n<numStud&&n>0){
n=n-1;
for(int i=n;i<numStud;i++){
    s[i+1]=s[i];
}
numStud--;}
else{
    cout<<"student not found, press any key to continue";
    getch();}
}


void cautare(stud s[]){
    system("cls");
    if(numStud!=0){
for(;;){
    system("cls");
        cout<<"1.Search by avg grade\n";
        cout<<"2.Search by name\n";
        cout<<"3.Search by group\n";
        cout<<"ESC.exit\n";
    switch(getch()){
    case 49:{
        cout<<"Insert avg grade:";
    double temp;
    cin>>temp;
    for(int i=0;i<numStud;i++){
        if(trunc(s[i].media)==trunc(temp))
            cout<<"Student "<<i<<endl;
            cout<<"Name:"<<s[i].nume;
            cout<<"Avg grade:"<<s[i].media;
            cout<<"Group:"<<s[i].grupa;
    }

    }
    break;
    case 50:{
        cout<<"Enter the name:";
        char temp[255];
        cin>>temp;
    for(int i=0;i<numStud;i++){
    if(strstr(s[i].nume,temp)!=NULL){
            cout<<"Student "<<i<<endl;
            cout<<"Name:"<<s[i].nume;
            cout<<"Avg grade:"<<s[i].media;
            cout<<"Group:"<<s[i].grupa;
    }

    }
    }
    break;
    case 51:{
        cout<<"Enter the group:";
        char temp[255];
        cin>>temp;
        for(int i=0;i<numStud;i++){
        if(strstr(s[i].grupa,temp)!=NULL){
            cout<<"Stud "<<i<<endl;
            cout<<"Name:"<<s[i].nume;
            cout<<"Avg grade:"<<s[i].media;
            cout<<"Group:"<<s[i].grupa;
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
    cout<<"you have to insert students first of all"<<endl;
system("pause");
}
void modif(stud s[]){
   system("cls");
   for(;;){
        cout<<"1.Change grades\n";
        cout<<"2.Change name\n";
        cout<<"3.Change group\n";
    }}


