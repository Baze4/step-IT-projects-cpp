#include<iostream>
#include<cstdlib>
#include<cstring>
#include<ctime>
#include<cmath>

 

using namespace std;

 


class sir
{
  char value[255];
  
  void STRCPY(char value[])
  {
      int i=0;
      
       while( value[i] != '\0' )
       {
           this->value[i]=value[i];
           i++;
     }
       this->value[i]='\0';
  }
  
  int STRLEN(char value[])
  {
      int i=0;
      
       while( value[i] != '\0' )
       {
        i++;
     }
     return i;  
  }
  
  void STRCAT(char value[])
  {
      int i=STRLEN(this->value);
      int j=0;
      
      if( i + STRLEN(value) <=255)
      {
          
      
       while( value[j] != '\0' )
       {
           this->value[i+j]=value[j];
           j++;
     }
       this->value[i+j]='\0';
       
    }
    
  }
  
  bool STRCMP(char value[])
  {
      
      if( STRLEN(this->value) != STRLEN(value) ) return false;
      else {
          
          return true ;
          
      }
      
  }
  
  public:
      
          sir(){this->value[0]='\0'; }
         
         sir(char value[]){  STRCPY(value); }
         
         sir(sir&Obj){ STRCPY(Obj.value);  }
         
        ~sir(){ }
        
          friend ostream& operator<<(ostream&FLUX,sir&OBJ);
        friend istream& operator>>(istream&FLUX,sir&OBJ);
        
        void operator=(char value[]){ STRCPY(value);    }
        void operator=(sir&Obj){ STRCPY(Obj.value);    }
        
       int len(){ return STRLEN(this->value);    }
       int operator!(){ return STRLEN(this->value); }
        
       sir& operator+(char value[]){ STRCAT(value); return *this;       }
       sir& operator+(sir&Obj){ STRCAT(Obj.value); return *this;       }
      
       bool operator==(char value[]){ return STRCMP(value);   }
       bool operator==(sir&Obj){ return STRCMP(Obj.value);   }
      
      char* getVALUE(){ return this->value; }
};

 

    ostream& operator<<(ostream&FLUX,sir&OBJ)
    {
        FLUX << "Valoare = " << OBJ.value <<endl;
        return FLUX;
    }

 

    istream& operator>>(istream&FLUX,sir&OBJ)
    {
        cout<<"Enter sir::";
        FLUX >> OBJ.value;
        return FLUX;
    }
    
 int main()
 {
     sir A,B=A;
     
     cout<<" A="<<A.getVALUE()<<endl;
     cout<<" B="<<B.getVALUE()<<endl;
     
     A="Step 2020";
     
     cout<<" A=char* = "<<A.getVALUE()<<endl;
     
     B=A;
     cout<<" B=Objet = "<<B.getVALUE()<<endl;
     
     
     sir C;
     
     cout<<C;
     
     cin>>C;
     
     cout<<C;
     cout<<"length="<<C.len()<<endl;
     cout<<"length="<<!C<<endl;
     
      //strlen(char[]);
     
     cout<<A+B+C<<endl;
     cout<<B+" it STEP 2020"<<endl;
     
     
     if( A==B ) cout<<" Sunt egale A si B"<<endl;
     else cout<<"Nu sunt egale A si B"<<endl;
     
     return 0;
 }
