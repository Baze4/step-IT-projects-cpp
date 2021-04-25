#include<iostream>
#include<cstdlib>
#include<conio.h>
#include<cstring>
#include<iomanip>
#include<ctime>
#include<cmath>
 

using namespace std;

 


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
		bool operator%(int g){return this->value%g;}
         //  bool operator==(var&Obj){return this->value==Obj.value;}
         //  bool operator==(int x){return this->value==x;}
        
        
        friend bool operator==(var&, var&);
        friend bool operator==(var&, int);
       
            
          
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
*/
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
var n;


   
   cin>>n;
	var *P=new var[100];
	var *par=new var[100];
	var max=P[0],min=P[0];
	
   for(int i=0;i<n.getVALUE();i++)
   {
   	P[i]=rand()%10+1;
   	
     if(P[i]%2==0)par[i]=par[i]+P[i];
	 
   }
   cout<<endl;
   cout<<"numere pare= "<<endl;
    for(int i=0;i<n.getVALUE();i++)
   {
     cout<<setw(3)<<par[i];
   }
   
  
   cout<<endl;
   
var suma;
  for(int i=0;i<n.getVALUE();i++)
   {
      suma+=par[i];
      
   }cout<<"suma pare="<<suma<<endl;
   
   
    for(int i=0;i<n.getVALUE();i++)
   {
      if(P[i]>max)max=P[i];
   }
    for(int i=0;i<n.getVALUE();i++)
   {
      if(P[i]<min)min=P[i];
   }
   cout<<"max= "<<max;
   cout<<"min= "<<min;
   cout<<endl;
   var temp=max;
   max=min;
   min=temp;
    cout<<"max= "<<max;
   cout<<"min= "<<min;
   
   delete[] P;
   delete[] par;
 
  

	

  return 0;
}

 

/*

 

class om
{
   char nume[100];
   int an;
   bool gen;
   
   public:
            
          
           //om(){ this->nume[0]=0;  this->an=NULL; this->gen=NULL;  }
           
        // om(char *nume){ strcpy(this->nume,nume);  this->an=NULL; this->gen=NULL;  }

 

        // om(int an){ this->nume[0]=0;  this->an=an; this->gen=NULL;  }
        
        // om(bool gen){ this->nume[0]=0;  this->an=NULL; this->gen=gen;  }
         
        // om(char *nume, int an, bool gen){ strcpy(this->nume,nume);  this->an=an; this->gen=gen;  }
           
           om(char *nume="\0", int an=NULL, bool gen=NULL)
            { strcpy(this->nume,nume);  this->an=an; this->gen=gen;  }
           
         om(const om&Obj)
            {
               strcpy(this->nume,Obj.nume);
            this->an=Obj.an; 
            this->gen=Obj.gen; 
         }
          
           ~om(){ cout<<" DESTRUCTOR "<<endl; }
           
         inline  void setNUME(){  cout<<" Enter nume ="; cin>>nume;   }
         inline  void setNUMEparam(char *nume){   strcpy(this->nume,nume);   } 
              
         inline  void setAN(){  cout<<" Enter an ="; cin>>an;   }
         inline  void setANparam(int an){  this->an=an;   } 
           
         inline  void setGEN(){  cout<<" Enter gen ="; cin>>gen;   }
         inline  void setGENparam(bool gen){ this->gen=gen;   } 
                  
         inline  const char* getNUME()const{ return this->nume; }
         inline  const  int  getAN()const{ return this->an; }
         inline  const bool  getGEN()const{ return this->gen; }
           
         inline  int lungimeNUME(){ return strlen(nume);     }  
         
};

 

*/
