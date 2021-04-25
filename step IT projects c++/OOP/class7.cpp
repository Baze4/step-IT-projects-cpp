#include<iostream>
#include<cstdlib>
#include<cstring>
#include<ctime>

using namespace std;
/*
class var
{
   int value;    
   
   public:
       
      
  var(int value=NULL){ this->value=value;  cout<<"Constructor optimizat"<<endl;   }
      
  var(const var&OBJ)
         {
            this->value = OBJ.value;   cout<<" Constructor copiere "<<endl; 
                
         }   
            
         void setVALUE(){  }
         void setVALUEparam(int value){ this->value=value;     }
           const int getVALUE()const{ return this->value; }
           int inc(int x){ return value+=x;}
};
*/

 

class om
{
   char nume[100];
   int an;
   bool gen;
   
   public:
           
         ///  om(){ this->nume[0]=0;  this->an=NULL; this->gen=NULL;  }
           //explicit om(char *nume="MARCEL"){ strcpy(this->nume,nume);  this->an=NULL; this->gen=NULL;  }
           //explicit om(int an){ this->nume[0]=0;  this->an=an; this->gen=NULL;  }
          // explicit om(bool gen){ this->nume[0]=0;  this->an=NULL; this->gen=gen;  }
           
            om(char *nume="\0", int an=NULL, bool gen=NULL){ strcpy(this->nume,nume);  this->an=an; this->gen=gen;  }
       
explicit om(const om&Obj)
            {
               strcpy(this->nume,Obj.nume);
            this->an=Obj.an; 
            this->gen=Obj.gen; 
         }
      
         ~om (){cout<<"DESTRUCTOR"<<endl;}
           
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

 
   

int main()
{
	srand(time(0));

	om *o[100];
	
	 for(int i=0; i<3; i++)
	 {
	   o[i] = new om;
	   
	   o[i]->setNUME();
	   o[i]->setAN();
	   o[i]->setGENparam(true);
	 }

	
	
	
	
	for(int i=0; i<3; i++)
	{ 
	  cout<<"     o["<<i<<"].getNUME="<<o[i]->getNUME()<<endl;
	  cout<<"     o["<<i<<"].getAN="<<o[i]->getAN()<<endl;
	  cout<<"     o["<<i<<"].getGEN="<<o[i]->getGEN()<<endl;
	}
	
		for(int i=0; i<3; i++)
	{
	  delete o[i];
	}
 return 0;
}




 

