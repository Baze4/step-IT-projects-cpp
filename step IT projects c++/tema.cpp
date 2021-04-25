#include <cstdlib>
#include <iostream>
#include <ctime>
#include <iomanip>
#include <conio.h>

using namespace std;

void input(int wow[]){
int n=1;
cout<<"Press esc to exit or any character to continue"<<endl;
getch();
do{
    *(wow+n)=rand()%10;
     cout<<"arr["<<n<<"]"<<"="<<*(wow+n)<<endl;
    n++;
    int *rezerv= new int[n];
    for(int i=0;i<n;i++)
    *(rezerv+i)=*(wow+i);
    delete[] wow;
    int *wow= new int[n+1];
    for(int i=0;i<n;i++)
    *(wow+i)=*(rezerv+i);
    delete[] rezerv;


}
while(getch()!=27);
for(int i=1;i<n;i++)
    cout<<setw(3)<<*(wow+i);
cout<<endl;
}

void matrice(int bi[][50],int m, int n){
for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
    bi[i][j]=rand()%10;
    cout<<setw(3)<<bi[i][j];
    }
    cout<<endl;
}

}
void calc(int temp[][25],int m,int n,int num){
int sum=0;
if(m==n){
    for(int i=0;i<m;i++){
        sum+=temp[i][i];
        sum+=temp[m-1-i][i];
    }
    cout<<"Suma cadranului " <<num<<"="<<sum<<endl;
} else
cout<<"Cadranul nu este patrat, suma diag. nu poate fi calculata"<<endl;

}
void cadrane(int bi[][50],int m,int n){
    int temp[25][25];
    cout<<"Cadranul 1"<<endl;
    for(int i=0;i<m/2;i++){
        for(int j=0;j<n/2;j++){
        cout<<setw(3)<<bi[i][j];
        temp[i][j]=bi[i][j];
        }
        cout<<endl;
    }
    calc(temp,m/2,n/2,1);
  cout<<"Cadranul 2"<<endl;
        for(int i=0;i<m/2;i++){
        for(int j=n/2;j<n;j++){
        cout<<setw(3)<<bi[i][j];
        temp[i][n-1-j]=bi[i][j];

        }
        cout<<endl;
    }
    calc(temp,(m-m/2),(n/2),2);

  cout<<"Cadranul 3"<<endl;
     for(int i=m/2;i<m;i++){
        for(int j=0;j<n/2;j++){
            cout<<setw(3)<<bi[i][j];
            temp[i-m/2][j]=bi[i][j];
        }
        cout<<endl;
     }
    calc(temp,m/2 ,(n-n/2) ,3);

      cout<<"Cadranul 4"<<endl;
        for(int i=m/2;i<m;i++){
        for(int j=n/2;j<n;j++){
        cout<<setw(3)<<bi[i][j];
        temp[i-m/2][j-n/2]=bi[i][j];
        }
         cout<<endl;
        }
           calc(temp,(m-m/2) ,(n-n/2) ,4);
    }




int main(){
    srand(time(0));
int *wow=new int[1];
input(wow);


int n,m;
cout<<"m(randuri)=";
cin>>m;
cout<<"n(coloane)=";
cin>>n;
int bi[50][50];
matrice(bi,m,n);
cadrane(bi,m,n);

}
