#include <iostream>
#include <string>

using namespace std;

class om 
{
      public:
	  
	  virtual void setNUME()=0;
	  virtual void setNUMEparam(string nume)=0;
	  virtual string getNUME()=0;
	  
	  virtual void setAN()=0;
	  virtual void setANparam(int an)=0;
	  virtual int getAN()=0;
	  
	  virtual void setGEN()=0;
	  virtual void setGENparam(bool gen)=0;
	  virtual bool getGEN()=0;
	  	
};

class O : public om
{
	string nume;
	int an;
	bool gen;
	
	
    public:
    	
    	
    	O(string nume="\0", int an=NULL, bool gen=NULL)
			{ this->nume=nume;  this->an=an; this->gen=gen;  }
   	    
         O(const O&Obj)
   	     {
   	    	this->nume=Obj.nume;
			this->an=Obj.an; 
			this->gen=Obj.gen; 
		 }
    	
    	
    	
	   
	   
	   virtual void setNUME(){cout<<"Introdu numele: "<<endl;cin>>this->nume;}
	   virtual void setNUMEparam(string nume){this->nume=nume;}
	   virtual string getNUME(){return this->nume;}
	   
	    virtual void setAN(){cout<<"Introdu anul de nastere= "<<endl;cin>>this->an;}
	    virtual void setANparam(int an){this->an=an;}
	     virtual int getAN(){return this->an;}
	   
	   virtual void setGEN(){cout<<"Introdu genul (1=Masculin)&(0=Femenin):: "<<endl;cin>>this->gen;}
	    virtual void setGENparam(bool gen){this->gen=gen;}
	     virtual bool getGEN(){return this->gen;}
	   
	   
	   	
};

int main()
{
O x;


x.setNUME();
cout<<"Nume = "<<x.getNUME()<<endl;
x.setAN();
cout<<"Anul = "<<x.getAN()<<endl;
x.setGEN();
cout<<"Genul = "<<x.getGEN()<<endl;

}
