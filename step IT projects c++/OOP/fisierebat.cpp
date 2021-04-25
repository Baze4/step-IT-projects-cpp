#include<iostream>
#include<cstdlib>
#include<cstring>
#include<ctime>
#include<fstream>
using namespace std;

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
   	   
   	    ~om(){ cout<<" DESTRUCTOR"<<endl; }
   	    
         inline  void setNUME(){  cout<<" Enter nume ="; cin>>nume;   }
         inline  void setNUMEparam(char *nume){   strcpy(this->nume,nume);   } 
		      
		 inline  void setAN(){  cout<<" Enter an ="; cin>>an;   }
         inline  void setANparam(int an){  this->an=an;   } 
           
		 inline  void setGEN(){  cout<<" Enter gen ="; cin>>gen;   }
         inline  void setGENparam(bool gen){ this->gen=gen;   } 
		          
		 inline  const char* getNUME()const{ return this->nume; }
		 inline  const  int  getAN()const{ return this->an; }
		 inline  const bool  getGEN()const{ return this->gen; }
		   
		 	 
       
        
         friend ostream& operator<<(ostream&FLUX,om&OBJ);
         friend istream& operator>>(istream&FLUX,om&OBJ);


};

 // 1.Supraincarcarea fluxului de afisare <<Obiect cout << " INFO ";

ostream& operator<<(ostream&FLUX,om&OBJ)

{

FLUX << " Valoarea = " << OBJ.nume << endl;

return FLUX;

}

// 2.Supraincarcarea fluxului de inserare >>Obiect cin >> Variabila ;

istream& operator>>(istream&FLUX,om&OBJ)

{

cout<<" Supraincarcarea >> Enter value=";

FLUX >> OBJ.nume;

return FLUX;

} 

class stud : public om
{
	
	public : stud(){cout<<"constructor B"<<endl;}
	         ~stud(){cout<<"destructor B"<<endl;}
};


int main()
{stud X;



int value;
 fstream F("lucru.txt", ios::out|ios::in);
 
 if(F.fail())
 {
 	cout<<" fstream - Error FILE"<<endl;
 }
else
{    
    
	cout<<"1.Pentru introducere"<<endl;
	cout<<"2.Pentru citire"<<endl;
	cin>>value;
	
	if(value==1)
	{
		F<<X.setNUME();
		F<<X.setAN();
		F<<X.setGEN();
	}
	
	if(value==2)
	{
		while(!F.eof())
		{
		
		F>>X.getNUME();
		F>>X.getAN();
		F>>X.getGEN();
		
	}
	}
}




        
  return 0;
}


