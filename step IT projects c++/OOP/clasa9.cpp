
#include<iostream>
#include<cstdlib>
#include<cstring>
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
    ~var(){ cout<<" Desctructor !!!"<<endl;    }
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
          
          friend var operator++(var&);
          void operator++(int);
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
    
    
    var operator++(var&a) 
    { 
       a.value++;
       
        return a;
    } 
    
       void var::operator++(int)
    {
    	this->value++;
	}
 
    //(a+b-c)*(a-b+c)
    
int main()
{
	
	
    var N;
    //N.setVALUEparam((rand()%2+1)*4);
    cin>>N;
    cout<<N;
    
   var *V=new var[N.getVALUE()*4];
   
   for(int i=0;i<N.getVALUE()*4;i+=4)
   {
   	cin>> V[i]>>V[i+1]>>V[i+2];
	V[i+3]=V[i]+V[i+1]-V[i+2];
	
	cout<<"V["<<i<<"]"<<V[i]<<endl;
	cout<<"V["<<i+1<<"]"<<V[i+1]<<endl;
	cout<<"V["<<i+2<<"]"<<V[i+2]<<endl;
	cout<<"V["<<i+3<<"]"<<V[i+3]<<endl;
   }

delete[]V;
 

    
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
