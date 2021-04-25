#include<iostream>
#include<cstdlib>
#include<conio.h>
#include<cstring>
#include<iomanip>
#include<ctime>
#include<cmath>
 
using namespace std;


class str
{
	char s[255];
	
	public:
	 str(){ this->s[0]='\0';    } 
	 str(char s[]){ strcpy(this->s,s);cout<<"Constructor"<<endl;}
	 
	  str(const str&Obj)
        {
            strcpy(this->s,Obj.s); 
          
        }
	
	
	void setNUME(){ cout<<" Enter Nume="; cin>>this->s; }
	void setNUMEparam(char *s){ strcpy( this->s, s); }
	
	const char* getNUME()const{ return this->s;}
	
	friend ostream& operator<<(ostream&FLUX,str&OBJ);
    friend istream& operator>>(istream&FLUX,str&OBJ);
	
	
  friend str operator+(str obj1,str obj2) //concatinare
    { 
       str obj3;
       strcpy(obj3.s,obj1.s);
       strcat(obj3.s,obj2.s);
       return obj3;
    } 
    
    
   
    friend int operator==(str obj1,str obj2 ) //strcmp
    { 
      if(strcmp(obj1.s,obj2.s)==0) {return 1;}else {return 0;} }
 
};


   
   ostream& operator<<(ostream&FLUX,str&OBJ) 
   {
        FLUX << " Valoarea = " << OBJ.s << endl;
        return FLUX;
   }  
   
 
   istream& operator>>(istream&FLUX,str&OBJ) 
   {
        cout<<" Supraincarcarea >> Introdu valoarea=";
        FLUX >> OBJ.s;
        return FLUX;
   } 

 



int main ()
{

str a,b,c;
cin>>a>>b;
cout<<c;
if(a==b)
{
	cout<<"merge"<<endl;
}
else 
{
	cout<<"galima"<<endl;
}

	


}
