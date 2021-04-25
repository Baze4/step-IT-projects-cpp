#include <iostream>
#include <string>

using namespace std;

//vritual void functio ()=0;


class om 
{
      public:
	  
	  virtual void setNUME()=0;
	  virtual void setNUMEparam(string nume)=0;
	  virtual string getNUME()=0;
	  	
};

class O : public om
{
	string nume;
    public:
	   O(string nume){this->nume=nume; }
	   
	   virtual void setNUME(){cout<<"Introdu numele: ";cin>>this->nume;}
	   
	   virtual void setNUMEparam(string nume){this->nume=nume;}
	   
	   virtual string getNUME(){return this->nume;}
	   
	   	
};

int main()
{

O x;
cout<<"Nume = "<<x.getNUME()<<endl;

x.setNUME();
cout<<"Nume = "<<x.getNUME()<<endl;

}
