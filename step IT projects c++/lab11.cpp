#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath> 

using namespace std;

int main()
{
	
	int a,b,c;
	

	
	
do
{
	a=rand()%10+1;
	b=rand()%10+1;
	c=rand()%10+1;
	
	cout<<"a+b-c="<<a+b-c;
	
}while((a+b-c)%2!=0);

	
	


}
