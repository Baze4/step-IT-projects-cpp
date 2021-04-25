#include<iostream>
#include<cstdlib>
#include<cstring>
#include<ctime>
#include<fstream>
#include<iomanip>
#include<conio.h>

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
		   
		 	 };
 
class stud : public om
{
	
	public : stud(){cout<<"constructor B"<<endl;}
	         ~stud(){cout<<"destructor B"<<endl;}
};

int main()
{
    stud *o = new stud[100];

 

    int n, i = 0, size = 0;

 

    int Key;
    do
    {
            o[i].setNUME();
            o[i].setAN();
            o[i].setGEN();
            size += sizeof(o[i]);
            i++;
        cout<<" Press any key to continue or ESC to Exit"<<endl;
    }while(_getch()!=27);
    
    n = i;
    
    for (int i = 0; i<n; i++) cout << " - obj(" << i + 1 << ")=" << o[i].getNUME()<<endl<<o[i].getAN()<<endl<<o[i].getGEN()<<endl;

 

    cout << "size=" << size << endl;
    
    /// WRITE file RED 2020   
    ofstream ofs("red_text_.txt", ios::binary); // myfile.open("", ios::out|ios::binary);
    ofs.write(reinterpret_cast<char*>(o), size);
    ofs.close();

 

    /// READ file RED 2020
    ifstream ifs("red_text_.txt", ios::binary); // myfile.open("", ios::in|ios::binary);
    if (!ifs) { cout << "File not found"; return 1; }

 

    ifs.seekg(0, ifs.end); // setam informatia
    int len = ifs.tellg(); // obtinem lungimea informatiei
    ifs.seekg(0, ifs.beg); // setam fisierul la inceput

 

    int max = (len / sizeof(stud));

 

    ifs.read(reinterpret_cast<char*>(o), 100); //
    ifs.close();

 

    for (int i = 0; i<max; i++) 
    cout << " - obj(" << i + 1 << ")=" << o[i].getNUME()<<endl<<o[i].getAN()<<endl<<o[i].getGEN()<<endl;

 

    system("pause");
}
