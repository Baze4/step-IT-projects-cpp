#include<iostream>
#include<cstdlib>
#include<cstring>
#include<ctime>
#include<cmath>
#include<string>

 

using namespace std;

/*
try 
{
  cod vulnerabil
}
  catch (tip)
{
bloc de cod care prelucreaza exceptia
}

*/
          
int main()
{
	/*
	try
	{
		cout<<" Begin try"<<endl;
		
		throw 777;
		
		cout<<"End try"<<endl;
	}
	catch(int x)
	{
		cout<<" Exceptie int x= "<<x<<endl;
	}
*/

srand(time(0));
int a=rand()%10,b=rand()%10, c=5;//rand()%10;
double R;
const int x=888;
char xxx[]="itSTEP2020";
try 
{
	cout<<"a= "<<a<<" b="<<"c ="<<c<<endl;
	
	if(c==0)throw 100;
   else	if(c>3 && c<5)throw 100.101;
   else	if(c>1 && c<3)throw 'a';
   else	if(c==5) throw "step=5";
   else	if(c==6) throw "step=6";
   else	if(c==7) throw xxx;
   else	if(c==8) throw x;
	
	 R= a+b/double(c);
	
	cout<<a<<"+"<<b<<"/"<<c<<"="<<R<<endl;
	
}catch (int x)
{
cout<<a<<"+"<<b<<"/"<<c<<"="<<"EROARE:: IMPRATIRE LA ZERO";
R=0;
}

catch (const int x)
{
cout<<a<<"+"<<b<<"/"<<c<<"="<<"EROARE:: CONST";
R=0;
}

catch (double x)
{
cout<<"EROARE:: double "<<x<<endl;

}


catch (char x)
{
cout<<"EROARE:: char "<<x<<endl;

}


catch (const char x[])
{
cout<<"EROARE:: const char [] "<<x<<endl;

}
catch (...)
{
cout<<"EROARE:: ... "<<endl;

}

}
