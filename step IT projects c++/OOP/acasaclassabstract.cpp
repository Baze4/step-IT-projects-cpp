#include <iostream>
#include <string>
#include <cstring>

using namespace std;

//vritual void functio ()=0;


template <class T>
class var
{
	T value;
	
	public:
		void setVALUE(string mes){cout<<mes; cin>>this->value;}
		void setVALUE(){cout<<"introdu anul "; cin>>this->value;}
		void setVALUE1(){cout<<"introdu genul (1 Masculin)(0 Femenin)= "; cin>>this->value;}
		T getVALUE(){return this->value;}
		
		
};

class om 
{
      public:
	  
	  virtual void setNUME(string mes)=0;
	  virtual string getNUME()=0;
	  
	  virtual void setAN()=0;
	  virtual int getAN()=0;
	  
	  virtual void setGEN()=0;
	  virtual bool getGEN()=0;
	  	
};

class O:public om
{
	var <string> nume;
	var <int> an;
    var <bool> gen;
    
    public:

    	
	
    	
  virtual void setNUME (string mes){ this->nume.setVALUE(mes);}
  virtual string getNUME(){return this-> nume.getVALUE();}
  
  virtual void setAN (){ this->an.setVALUE();}
  virtual int getAN(){return this->an.getVALUE();}
  
  virtual void setGEN(){ this->gen.setVALUE1();}
  virtual bool getGEN(){return this->gen.getVALUE();}
	 
	   
	   
	   	
};

int main()
{
O x;

x.setNUME("Enter nume= ");
cout<<"Numele= "<<x.getNUME()<<endl;
x.setAN();
cout<<"Anul= "<<x.getAN()<<endl;
x.setGEN();
cout<<"Genul= "<<x.getGEN()<<endl;



}
