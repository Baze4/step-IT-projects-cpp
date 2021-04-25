#include<iostream>
#include<cstdlib>
#include<conio.h>
#include<cstring>
#include<iomanip>
#include<ctime>
#include<cmath>
// NU TIN MINTE CUM SE CALCULEAZA CAE VALORI A ADAUGAT UTILIZATORUL
 

using namespace std;

 

class var
{
   int value;    
   
   public:
       
         var(){ this->value=NULL;  /*cout<<"Constructor implicit"<<endl;*/   } 
         var(int value){ this->value=value;  /*cout<<"Constructor 2 "<<endl; */  } 
               
         var(const var&OBJ)
         {
            this->value = OBJ.value;   /*cout<<" Constructor copiere "<<endl; */
                
         }   
    ~var(){ /*cout<<" Desctructor !!!"<<endl;*/}    
         void setVALUE(){  }
         void setVALUEparam(int value){ this->value=value;     }
           const int getVALUE()const{ return this->value; }
           int inc(int x){ return value+=x;}
           
        friend var power(var&,var&);
        friend ostream& operator<<(ostream&FLUX,var&OBJ);
        friend istream& operator>>(istream&FLUX,var&OBJ);
        
        friend var& operator+(var&,var&);
        friend var& operator-(var&,var&);
        friend var& operator*(var&,var&);
        friend var  operator++(var&);
        
        void operator++(int){ this->value++; }
        void operator=(int x){ this->value=x; }
        void operator=(var&O){ this->value=O.value;}
        void operator+=(var&O){this->value+=O.value;}
        void operator-=(var&O){this->value-=O.value;}
        void operator/=(var&O){this->value/=O.value;}
        void operator*=(var&O){this->value*=O.value;}
        bool operator<(var&O){return this->value<O.value;}
        bool operator>(var&O){return this->value>O.value;}
		bool operator%(int k){return this->value%k;}
		//bool operator==(var&O){return this->value==O.value;}
        friend bool operator==(var&,var&);
        bool operator!=(var&O){return this->value!=O.value;}
        bool operator!=(int k){return this->value!=k;}
};

    

        ostream& operator<<(ostream&FLUX,var&OBJ)
    {
        FLUX <<OBJ.value;
        return FLUX;
    }

 

    istream& operator>>(istream&FLUX,var&OBJ)
    {
        cout<<"Supraincarcarea >> Enter Value::";
        FLUX >> OBJ.value;
        return FLUX;
    }

 

    var& operator+(var&a,var&b)
    {
        var *X=new var(a.value+b.value);
        return *X;    
    }
    var& operator-(var&a,var&b)
    {
        var *X=new var(a.value-b.value);
        return *X;    
    }
   bool operator==(var&a,var&b)
    { bool x;
 
      return a.value==b.value;
	}

 

int main()
{
    srand(time(0));
var N,ipar=0,iimp=0,k=0; 
   cout<<"Enter N=";
   cin>>N;k++;
	var *V=new var[100];
	var *par=new var[100];
	var *imp=new var[100];
   for(int i=0;i<N.getVALUE();i++)
   {
   	V[i]=rand()%10+1;
     if(V[i]%2==0){par[i]=par[i]+V[i];}
     else{imp[i]=imp[i]+V[i];}
   }
   cout<<"V[i]...."<<endl;
      for(int i=0;i<N.getVALUE();i++)
   {
      cout<<setw(3)<<V[i];
   }
   cout<<endl;
   cout<<"NR PARE...."<<endl;
    for(int i=0;i<N.getVALUE();i++)
   {
      if(par[i]!=NULL)cout<<setw(3)<<par[i];
   }
   cout<<endl;
   cout<<"NR IMPARE...."<<endl;
     for(int i=0;i<N.getVALUE();i++)
   {
      if(imp[i]!=NULL)cout<<setw(3)<<imp[i];
   }
   cout<<endl;
var spar,simp;
     for(int i=0;i<N.getVALUE();i++)
   {
      simp+=imp[i];
      
   }cout<<"suma nr impare="<<simp<<endl;
     for(int i=0;i<N.getVALUE();i++)
   {
      spar+=par[i];
      
   }cout<<"suma nr pare="<<spar<<endl;
   
   var max=V[0],min=V[0];
        for(int i=0;i<N.getVALUE();i++)
   {
      if(max<V[i])max=V[i];
   }cout<<"nr maxim="<<max<<endl;
           for(int i=0;i<N.getVALUE();i++)
   {
      if(min>V[i])min=V[i];
   }cout<<"nr minim="<<min<<endl;
   var q=max;
   max=min;
   min=q;
   cout<<"max intors::"<<max<<"  min intors::"<<min<<endl;
   cout<<"valori introduse de user::"<<k;
   delete[] V;
   delete[] par;
   delete[] imp;
  return 0;
}
