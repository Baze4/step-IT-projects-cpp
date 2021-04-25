/*



  static_cast,   const_cast,    reinterpret_cast

 

*/

 /*

#include <iostream>

 

using namespace std;

 

int main()
{
    
    double a=88.88;
    
    int b=a;
    
    char c=(char)b;
    
    cout<<" c="<<c<<endl;

 

 

//se foloseste static_cast pentru conversie
 
 double d = 8.88;
 char h="Marcel";
 int x = static_cast<int>(d); // (int)d  int(d)
 int y = static_cast<char>(h); // (int)d  int(d)

 

 cout << "d este " << d << "\nx este " << x << endl;
 cout << "h este " << d << "\ny este " << x << endl;

 

    
    return 0;
}

*/

 



 

////  const_cast

 

/*
#include<iostream>

 

using namespace std;

 

class ConstCastTest
{
  int number;
 public:
 void setNumber(int);
 int getNumber() const;
 void printNumber() const;
  
};

 

void ConstCastTest::setNumber(int num){ number = num; }

 

int ConstCastTest::getNumber()const{ return number; }

 


void ConstCastTest::printNumber() const
{  
  const_cast<ConstCastTest*>(this)->number++;
  cout << "\nNumarul dupa modificare: "<< this->number << endl;
}

 void showSIR( char* sir)
 {
	cout<<"sir= "<<sir<<endl;
 }


int main()
{
	

	
 ConstCastTest x;//(1)
 x.setNumber(1);

 

 cout << "Valoarea initiala a numarului: " << x.getNumber();

 

 x.printNumber();

 	const char sir[]="itsept 2020";
	cout<<"sir= "<<sir<<endl;

showSIR(const_cast<char*>(sir));
 return 0;
} 

 
*/


 






 ///reinterpret_cast



#include <iostream>

 

using namespace std;

 

class INT
{
    int x;
public:
    INT(int x=65){ this->x = x; }
    int INTval() { return this->x; }

 

};
int main()
{
 
 int xx = 65, *ptr = &xx;   
 cout << reinterpret_cast<char*>(ptr) << endl; 
 
 cout<<endl;
 
 INT *x = new INT;
        
 cout <<"char - "<< reinterpret_cast<char*>(x) << endl;
 
 return 0;
}

