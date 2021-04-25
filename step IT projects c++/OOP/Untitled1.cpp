#include <iostream>
#include<cstdlib>
#include<cstring>
#include<ctime>
using namespace std;


class OM
{
   char nume[100];
   int an;
   bool gen; 
   public:	
  	        OM(char nume){this->nume; cout<<"Constructor implicit"<<endl; }
  explicit  OM(int an){this->an=NULL; cout<<"constructor de supraincarcare 1"<<endl; } 
  explicit  OM(int an1 ,int an2){this->an=an1+an2; cout<<"constructor de supraincarcare 2"<<endl; } 	
  explicit  OM(const OM&OBJ)
            {
            	this -> gen = OBJ.gen ; cout<<"Constructor de copiere "<<endl;
			} 	           
   	    
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
	 OM X1;
	 OM X1(1);
	 OM X2(1,1);
	 
	 OM Y(X2);
	 cout<<" Y="<<Y.getAN()<<endl;
	 
	return 0;
}
