#include <iostream>
#include <cstring>

using namespace std;


class stud
{
    char nume[255];
    int anul;
    bool gen;
    
    public:
    
       void setnume(){ cout<<"introdu nume="<<endl; cin>>nume;}
       void setnumePARAM(char*nume){strcpy(this->nume,nume);}
       void setan(){cout<<"introdu anul="<<endl;cin>>anul;}
       void setanPARAM(int anul){this->anul;}
       void setgen(){cout<<"INtrodu genul 1 or 0="<<endl;cin>>gen;}
       void setgenPARAM(bool gen){this->gen;}
        friend ostream& operator<<(ostream&FLUX,stud&OBJ);
        friend istream& operator>>(istream&FLUX,stud&OBJ);
    
};

 ostream& operator<<(ostream&FLUX,stud&OBJ)

{

FLUX << " Valoarea = " << OBJ.anul << endl;

return FLUX;

} 
 istream& operator>>(istream&FLUX,stud&OBJ)

{

cout<<" Supraincarcarea >> Enter value=";

FLUX >> OBJ.anul;

return FLUX;

} 

int main()
{
	stud a;
	cin>>a;
   cout<<a;
    a.setnume();
    a.setan();
    a.setgen();
}
