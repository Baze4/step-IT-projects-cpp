#include<iostream>
#include<cstdlib>
#include<string.h>

 

using namespace std;

 

class om
{
   char nume[100];
   int anul;
   bool gen;
   int value;
   
   
   public:
   	      
			  void setVALUE(char x){cout<<"introdu "<<x<<"=";cin>>value;}
   	             void setPARAM(int x){  this->value=x;}
   	       
           inline void setnume(){cout<<"nume= ";cin>>nume;}
           inline void setnumePARAM(char *nume){strcpy(this->nume,nume);}
            
           inline void setan(){cout<<"Anul= ";cin>>anul;}
         inline  void setanPARAM( int an){  this->anul;}
           
          inline void setgen(){cout<<"Genul= ";cin>>gen;}
          inline void setgenPARAM( bool gen){ this-> gen;}
           
         inline const char* getNUME()const{ return this->nume;  }  
        inline  const int   getANUL()const{ return this->anul;  }
         inline const bool  getGEN()const{ return this->gen;  }
         inline  const int  getVALUE()const { return this->value;  }
		     
};


int main ()

{
om a[100],n,min,verif;




n.setVALUE('N');
min.setPARAM(300000);

for (int i=0;i<n.getVALUE();i++)
{
   a[i].setnume();
   a[i].setan();
   a[i].setgen();
}

for (int i=0;i<n.getVALUE();i++)
{
 if(a[i].getANUL()<min.getVALUE()) min.setPARAM(a[i].getANUL());
 if(strlen(verif.getNUME())<strlen(a[i].getNUME())){verif.setnumePARAM((char*)a[i].getNUME());}
}
 cout<<"Cel mai batrin este cu anul ="<<min.getVALUE()<<endl;
 cout<<"cel mai lung nume = "<<verif.getNUME()<<endl;

}


