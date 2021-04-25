#include<iostream>
#include<cstdlib>

 

using namespace std;

 

class var
{
   int value;
   
   
   public:
           void insertM (char x) { cout<<"ENTER "<<x<<"=";cin>>value;}
           void insertRand(){  value=rand()%10;}
           void insertPARAM(int x){  value=x;}
           int inc(){return value++;}
           int returnVALUE(){ return value;  }  
		     
};

// am facu si minim sh maxim sa nu fie ca nu am inteles bine :D 

int main ()

{
	var n;
	var a[100],b[100],c[100],P[100],I[100],NP,NI,MAX,MIN;
    var rez[100];
	
	
	n.insertM('N');
	
	
	for(int i=0;i<n.returnVALUE();i++)
	{
	
		a[i].insertRand();
		b[i].insertRand();
		c[i].insertRand();
		
		cout<<"i= "<<i+1<<"a= "<<a[i].returnVALUE()<<"b= "<<b[i].returnVALUE()<<"c= "<<c[i].returnVALUE();
		rez[i].insertPARAM(a[i].returnVALUE()+b[i].returnVALUE()-c[i].returnVALUE());
		
		cout<<"a+b-c="<<rez[i].returnVALUE()<<endl;
		
	}
	NP.insertPARAM(0);
	NI.insertPARAM(0);
	MAX.insertPARAM(0);
	MIN.insertPARAM(30000);
	for(int i=0;i<n.returnVALUE();i++)
	{
  if(rez[i].returnVALUE()%2==0)
  {
  	P[NP.inc()].insertPARAM(rez[i].returnVALUE());
  	
  }
  else
  {
  	I[NI.inc()].insertPARAM(rez[i].returnVALUE());
  
  }
	
}

for(int i=0;i<NP.returnVALUE();i++)
	{
		cout<<"P["<<i+1<<"]="<<P[i].returnVALUE()<<endl;	
	}
	
	for(int i=0;i<NI.returnVALUE();i++)
	{
		cout<<"I["<<i+1<<"]="<<I[i].returnVALUE()<<endl;	
	}
	
		for(int i=0;i<n.returnVALUE();i++)
	{
		if (rez[i].returnVALUE()>MAX.returnVALUE())MAX.insertPARAM(rez[i].returnVALUE());
		
			
		
	
		
	}
	
			for(int i=0;i<n.returnVALUE();i++)
	{
		if (rez[i].returnVALUE()<MIN.returnVALUE())MIN.insertPARAM(rez[i].returnVALUE());
	
	
		
	}
	cout<<"minimu"<<MIN.returnVALUE()<<endl;
	cout<<"maximum"<<MAX.returnVALUE()<<endl;
	
	
}
