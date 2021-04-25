#include<iostream>
#include<cstdlib>
#include<cstring>
#include<ctime>
#include<cmath>

#include<string>

using namespace std;





class om
{
	char om1 [255];
	public:
		
		om(char nume[]){ strcpy(this->om1,om1);
		om(const om1&Obj){ strcpy(this->om1,Obj.om1); }
		 
        
	
};

class Universitate
{
	public:
		 om(){ cout<<" Constructor Clasa om"<<endl; 	}
	   ~ om(){ cout<<" Destructor Clasa om"<<endl;
};


class Student
{
	char nume[100];
	 
	public:
		
	   
	   
	    Student(char nume[]){ strcpy(this->nume,nume); cout<<"Constructor"<<endl; }
        
        Student(const Student&Obj)
        {
            strcpy(this->nume,Obj.nume); 
           
        }
        void setNUME(){ cout<<" Enter Nume="; cin>>this->nume;}
        const char* getNUME()const{ return this->nume;}
	   ~Student(){ cout<<" Destructor Clasa Student"<<endl;	}
	    };


int main()
{

	
}

