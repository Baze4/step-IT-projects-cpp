 
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
   /*
class var
{
   int value;	
   
   public:
   	
   	     var(){ this->value=NULL;  cout<<"Constructor implicit"<<endl;   } 
         var(int value){ this->value=value;  cout<<"Constructor 2 "<<endl;   } 
   	        
     var(const var&OBJ)
		 {
		    this->value = OBJ.value;   cout<<" Constructor copiere "<<endl; 
				
		 }   
	~var(){ cout<<" Desctructor !!!"<<endl;	}
   	  void setVALUE(){  }
   	  void setVALUEparam(int value){ this->value=value;	 }
   	    const int getVALUE()const{ return this->value; }
   	    int inc(int x){ return value+=x;}
   	    
   	    friend var power(var&,var&);
   	    friend ostream& operator<<(ostream&FLUX,var&OBJ);
   	    friend istream& operator>>(istream&FLUX,var&OBJ);
   	    
};
/*
   /*
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
	
*/


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
		   
		 inline  int lungimeNUME(){ return strlen(nume);	 } 
		 
		friend ostream& operator<<(ostream&FLUX,om&OBJ);
   	    friend istream& operator>>(istream&FLUX,om&OBJ); 
		friend int virsta(om&);
		 
};

int virsta (om&OBJ)
{
	return 2020 - (OBJ.an);
}
   
   ostream& operator<<(ostream&FLUX,om&OBJ) 
   {
   	
   	 FLUX << " Nume = " << OBJ.nume<< endl;
   	 FLUX << " An = " << OBJ.an<< endl;
   	 FLUX << " Gen = " <<OBJ.gen<< endl;
   	 return FLUX;
   }  
   
   
   
   istream& operator>>(istream&FLUX,om&OBJ) 
   {
   	 cout<<" Introdu numele ";
   	 FLUX >> OBJ.nume;
   	 cout<< " Introdu an = ";
   	 FLUX >> OBJ.an;
   	 cout<< " Introdu gen = ";
   	 FLUX >> OBJ.gen;
   	 return FLUX;
   } 


int main()
{
	srand(time(0));
	om x;
	cin>>x;
	cout<<x;
	
cout<<" Virsta =" <<virsta(x)<<endl;

 
  return 0;
}



   
