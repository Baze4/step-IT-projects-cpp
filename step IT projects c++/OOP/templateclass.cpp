#include<iostream>
#include <cstring>
using std::cout;
using std::endl;
using std::cin;


template <class O>
  class om
  {
   char nume[100];
   int an;
   bool gen;
   
   
   public:
   	
   	
   	
   	  om(char *nume="\0", int an=NULL, bool gen=NULL)
			{ strcpy(this->nume,nume);  this->an=an; this->gen=gen;  }
   	    
         om(const om&Obj)
   	     {
   	    	strcpy(this->nume,Obj.nume);
			this->an=Obj.an; 
			this->gen=Obj.gen; 
		 }
   	   
   	
   	
   	 inline  void setNUME(){  cout<<" Enter nume ="; cin>>nume;   }
         inline  void setNUMEparam(char *nume){   strcpy(this->nume,nume);   } 
		      
		 inline  void setAN(){  cout<<" Enter an ="; cin>>an;   }
         inline  void setANparam(int an){  this->an=an;   } 
           
		 inline  void setGEN(){  cout<<" Enter gen ="; cin>>gen;   }
         inline  void setGENparam(bool gen){ this->gen=gen;   } 
		          
		 inline  const char* getNUME()const{ return this->nume; }
		 inline  const  int  getAN()const{ return this->an; }
		 inline  const bool  getGEN()const{ return this->gen; }
		 
  };
  
  
  
  int main()
  {
  	
  	om <char> a;
  	om <int> b;
  	om <bool> c;
  	
  	a.setNUME();
  	b.setAN();
  	c.setGEN();
  	
  	
  	cout<<"Numele ="<<a.getNUME()<<endl;
  	cout<<"Anul ="<<b.getAN()<<endl;
  	cout<<"Genul= "<<c.getGEN()<<endl;
  	
  }
