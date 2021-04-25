#include<iostream>
#include<cstdlib>
#include<cstring>
#include<ctime>
#include<cmath>
#include<string>
#include <exception>
#include <typeinfo>
 

using namespace std;


          
  class RED
  {
  	public:
  		
  	virtual void f(){}
}X;        
          
          
int main()
{
	
	/*
	
	int a;
	int b[100];
	cout<<"int a = "<<typeid(a).name()<<endl;
	cout<<"int b[] = "<<typeid(b).name()<<endl;
	*/
	
    double a;
	double b[100];
	
	cout<<"double a = "<<typeid(a).name()<<endl;
	cout<<"double b[] = "<<typeid(b).name()<<endl;
	
	
	try 
	{
		RED *p = new RED;
		cout<<"RED P = "<<typeid(*p).name()<<endl;
	}
	catch(exception&X)
	{
		cout<<" EXCEPTION :: "<<X.what()<<endl;
	}
}
/*
{
int n=999999999999999999999999999999999;
try 
{
	int *p = new int [n];
	cout<<"sizeof(p) = "<<sizeof(p)<<endl;
}
//catch(exception&x)
catch(bad_alloc&x)
{
	cout<<" exception :: "<<x.what()<<endl;
}
*/

