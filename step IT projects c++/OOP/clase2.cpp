#include<iostream>
#include<cstdlib>

 

using namespace std;

 

class var
{
   int value;
   
   public:
   
           void insertRand(){  value=rand()%10;   }
           int returnVALUE(){ return value;  }    
};

 

int main()
{    
    var A,B,C, n;
    
    n.insert('n');
    
    for(int i=0; i<n.returnVALUE(); i++)
    {
        cout<<" iteratia = "<<i+1<<endl;
     A.insert('a');
     B.insert('b');
     C.insert('c');
     cout<<" a="<<A.returnVALUE()<<" b="<<B.returnVALUE()<<" c="<<C.returnVALUE()<<endl;
    
     cout<<" a+b-c="<<A.returnVALUE()+B.returnVALUE()-C.returnVALUE()<<endl;
    }
    
  return 0;
}
