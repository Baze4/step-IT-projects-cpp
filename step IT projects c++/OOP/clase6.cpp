#include <iostream>
#include<cstdlib>
#include<cstring>
#include<ctime>
using namespace std;


class om
{
   char nume[100];
   int an;
   bool gen; 
   public:	
  om(char *nume, int an, bool gen){ strcpy(this->nume,nume);  this->an=an; this->gen=gen;  }	
 	           
			
		inline  void setNUME(){  cout<<" Enter nume ="; cin>>nume;   }
         inline  void setNUMEparam(char *nume){ strcpy(this->nume,nume);   } 
		      
		 inline  void setAN(){  cout<<" Enter an ="; cin>>an;   }
         inline  void setANparam(int an){  this->an=an;   } 
           
		 inline  void setGEN(){  cout<<" Enter gen ="; cin>>gen;   }
         inline  void setGENparam(bool gen){ this->gen=gen;   } 
		          
		 inline  const char* getNUME()const{ return this->nume; }
		 inline  const  int  getAN()const{ return this->an; }
		 inline  const bool  getGEN()const{ return this->gen; }
		   
		 inline  int lungimeNUME(){ return strlen(nume);	 }
			
   	    
  
};
int main()
{
	 om x("marcel",1998,true);
	 
	 cout<<" x.nume="<<x.getNUME()<<endl;
    cout<<" x.an="<<x.getAN()<<endl;
    cout<<" x.gen="<<x.getGEN()<<endl;
	 
	 

	return 0;
}




