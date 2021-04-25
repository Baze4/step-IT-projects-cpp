#include<iostream>
#include<cstdlib>
#include<conio.h>
#include<cstring>
#include<iomanip>
#include<ctime>
#include<cmath>
 

using namespace std;

 /*


// friend tip_date nume_func(parametri);

 

/// operator  

 

   // var a,b;
   // a.value+b.value;
   // a+b  
   
class var
{
   int value;    
   
   public:
       
            var(){ this->value=NULL;     } 
         var(int value){ this->value=value;    } 
               
     var(const var&OBJ)
         {
            this->value = OBJ.value;    
                
         }   
    //~var(){ cout<<" Desctructor !!!"<<endl;    }
         void setVALUE(){  }
         void setVALUEparam(int value){ this->value=value;     }
           const int getVALUE()const{ return this->value; }
           int inc(int x){ return value+=x;}
           
           friend var power(var&,var&);
           
           friend ostream& operator<<(ostream&FLUX,var&OBJ);
           
           
           friend istream& operator>>(istream&FLUX,var&OBJ);
         
        //friend int operator+(var&, var&);   
          friend var& operator+(var&, var&);
          friend var& operator-(var&, var&);
          friend var& operator*(var&, var&);
          
          friend void operator++(var&); //++A
        //  friend void operator++(var&,int); //A++ A=A+1
          
          void operator++(int){this->value++;}
          void operator=(int x){this->value=x;}
          void operator=(var&Obj){this->value=Obj.value;}
          void operator+=(var&Obj){this->value+=Obj.value;}
        bool operator<(var&Obj){return this->value<Obj.value;}
        bool operator>(var&Obj){return this->value>Obj.value;}
		bool  operator%(int y){return this->value%y==0;}
         //  bool operator==(var&Obj){return this->value==Obj.value;}
         //  bool operator==(int x){return this->value==x;}
        
        
        friend bool operator==(var&, var&);
        friend bool operator==(var&, int);
       
       
     int operator ~()
     {
     	return 1;
	 }
       
       var& operator()(int x)
{
	this->value=x;
	return *this;
}
            
          
       var& operator()(var&O)
{
	this->value=O.value;
	return *this;
}

int operator [](int x)
{
	return x;
}

};     



 

   
  // 1.Supraincarcarea fluxului de afisare    <<Obiect              cout  << " INFO ";
   
   ostream& operator<<(ostream&FLUX,var&OBJ) 
   {
       
        FLUX << " Valoarea = " << OBJ.value << endl;
        
        return FLUX;
   }  
   
 // 2.Supraincarcarea fluxului de inserare    >>Obiect              cin >>  Variabila ;
   istream& operator>>(istream&FLUX,var&OBJ) 
   {
        cout<<" Supraincarcarea >> Enter value=";
        FLUX >> OBJ.value;
        return FLUX;
   } 
 
    var power(var&Obj, var&x)
    {
        return pow(Obj.value,x.value);
    }
    
    
/*    
    int operator+(var&a, var&b)
    {
        return a.value+b.value; 
    }

  bool operator== (var &a, var &b)
{
    return ( a.value == b.value );
}

 bool operator== (var &a, int x)
{
    return ( a.value == x );
}


    var& operator+(var&a, var&b)
    {
        int x= a.value+b.value;
        
        var *X = new var(x); 
        
        return *X; 
    }
    
    var& operator-(var&a, var&b)
    {
        int x= a.value-b.value;
        
        var *X = new var(x); 
        
        return *X; 
    }
    
    var& operator*(var&a, var&b)
    {
        int x= a.value*b.value;
        
        var *X = new var(x);  
        
        return *X; 
    }
    
    
    void operator++(var&a){ a.value++;} 
  // void operator++(var&a,int){a.value++;} 
 
    //(a+b-c)*(a-b+c)
    
int main()
{	
srand(time(0));
var a,b,c,R;


cout<<R(a(rand()%10+1)+b(rand()%10+1)-c(rand()%10+1));

if(R%2){cout<<"par"<<endl;}
else 
{
	cout<<"impar"<<endl;
}

cout<<~R;

  return 0;
}

 */



 

class om
{     
    char nume[100];
    int an;
    bool gen;

 

    public:
    
     //   om(){ FILE *f; f=fopen("poo.txt","r+"); fscanf(f, "%s %d %d",&nume,&an,&gen); fclose(f); }
           
       // om(char nume[]){ strcpy(this->nume,nume); this->an=NULL; this->gen=NULL; }
        
      //  om(int an){ strcpy(this->nume,"\0"); this->an=an; this->gen=NULL; }
        
       // om(bool gen){ strcpy(this->nume,"\0"); this->an=NULL; this->gen=gen; }
    
        om(char nume[], int an, bool gen){ strcpy(this->nume,nume); this->an=an; this->gen=gen; cout<<"Constructor"<<endl; }
        
        om(const om&Obj)
        {
            strcpy(this->nume,Obj.nume); 
            this->an=Obj.an; 
            this->gen=Obj.gen;
        }
        
        
        
      //  ~om(){  FILE *f; f=fopen("poo.txt","w+"); fprintf(f, "%s %d %d",nume,an,gen); fclose(f); }
        
        void setNUME(){ cout<<" Enter Nume="; cin>>this->nume; }
        void   setAN(){ cout<<" Enter An=";   cin>>this->an;   }
        void  setGEN(){ cout<<" Enter Gen=";  cin>>this->gen;  }
        
        void setNUMEparam(char *nume){ strcpy( this->nume, nume); }
        void   setANparam(int an)    { this->an=an;               }
        void  setGENparam(bool gen)  { this->gen=gen;             }
        
    const char* getNUME()const{ return this->nume;}
    const int getAN()const{ return this->an;}
    const bool getGEN()const{ return this->gen;}
    const char* getGENchat()const{ return this->gen ? "Masculin":"Femenin";}
    
    int strlenNUME(){  return strlen(this->nume); }
    

 int operator [](int an)
 {
 	return this->an;
 }
 
 bool operator [](bool gen)
 {
 	return this->gen;
 }

char* operator[](char *nume)
{
	return this->nume;
}

    

};

int main()
{
om R;

	
}
 


