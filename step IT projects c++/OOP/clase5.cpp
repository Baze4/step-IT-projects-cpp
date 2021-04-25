#include<iostream>
#include<cstdlib>
#include<cstring>
#include<ctime>








 

using namespace std;

 

///  pointerul this   this-> 

 

/// inline
class var
{
   int value;    
   public:
   	
 
   	
         void setVALUE(){  }
         void setVALUEparam(int value){ this->value=value;     }
         int inc(){return ++value;}
         const int getVALUE()const{ return this->value; }
};

 

class om
{
   char nume[100];
   int an;
   bool gen;
   
   public:
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
     om A[100];
    var N;
    

 

     N.setVALUEparam(10);
    for(int i=0; i< N.getVALUE(); i++)
    {
       A[i].setANparam(rand()%30+1950);
       A[i].setGENparam(rand()%2);
       if( i%2==0 )A[i].setNUMEparam("JoraKardan");
        else A[i].setNUMEparam("Jora");
    }
    
    for(int i=0; i< N.getVALUE(); i++)
    {
      cout<<i+1<<" nume = "<<A[i].getNUME()<<endl;
      cout<<i+1<<" an = "<<A[i].getAN()<<endl;
      cout<<i+1<<" gen = "<<A[i].getGEN()<<endl;
      cout<<endl;
    }
    
    om TEMP;
    
    TEMP.setANparam(A[0].getAN());
    TEMP.setNUMEparam((char*)A[0].getNUME());
    for(int i=1; i< N.getVALUE(); i++)
    {
      if( A[i].getAN() < TEMP.getAN() ) TEMP.setANparam(A[i].getAN());
      
      if( A[i].lungimeNUME() > TEMP.lungimeNUME() ) TEMP.setNUMEparam((char*)A[i].getNUME());
    }
        
    cout<<" Cel mai batrin om an = "<<TEMP.getAN()<<endl;
    cout<<" Cel mai lung nume om nume = "<<TEMP.getNUME()<<endl;
    
    var m,f;
    
    m.setVALUEparam(0);
    for(int i=0;i<N.getVALUE();i++)
    {
    	if (A[i].getGEN())m.inc();
	}
	cout<<"genul Masculin = "<<m.getVALUE();
	cout<<"genul femenin = "<<N.getVALUE()-m.getVALUE();
    
    

    
    
  return 0;
}
