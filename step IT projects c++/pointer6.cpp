#include<iostream>

#include<cstdlib>

#include<ctime>

#include<iomanip>

using namespace std;

int main()

{

srand(time(0));

int *n=new int;

cout<<"introdu n= ";

cin>>*n;

int *p=new int[*n];

for(int i=0;i<*n;i++)

{

*(p+i)=rand()%10+1;

}

for(int i=0;i<*n;i++)

{

cout<<setw(3)<<*(p+i);

}
//par
int *B1=new int;
*B1=0;

int *Main=new int[1]; 

for(int i=0;i<*n;i++)

{

if(*(p+i)%2==0)

{

int *res=new int[*B1+1];

for(int k=0;k<*B1;k++)

{

*(res+k)=*(Main+k);

}

delete[] Main;

int *Mainn=new int[*B1+1];

*(Mainn+*B1)=*(p+i);

for(int k=0;k<*B1;k++)

{

*(Mainn+k)=*(res+k);

}

delete[] res;

*B1+=1;

Main=Mainn;

}

}

cout<<endl;
cout<<endl;
cout<<endl;

cout<<"par= ";

for(int i=0;i<*B1;i++)

{

cout<<setw(3)<<*(Main+i);

}
cout<<endl;
cout<<endl;
cout<<endl;

//impar

int *B2=new int;
*B2=0;

int *Main1=new int[1]; 

for(int i=0;i<*n;i++)

{

if(*(p+i)%2!=0)

{

int *res1=new int[*B2+1];

for(int k=0;k<*B2;k++)

{

*(res1+k)=*(Main1+k);

}

delete[] Main1;

int *Mainn1=new int[*B2+1];

*(Mainn1+*B2)=*(p+i);

for(int k=0;k<*B2;k++)

{

*(Mainn1+k)=*(res1+k);

}

delete[] res1;

*B2+=1;

Main1=Mainn1;

}

}
cout<<"impar= ";
for(int i=0;i<*B2;i++)

{

cout<<setw(3)<<*(Main1+i);

}

}
