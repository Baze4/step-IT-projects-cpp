#include<iostream>
#include<cstdlib>
#include<cstring>
#include<ctime>
#include<cmath>
#include<string>
#include <exception>
#include <typeinfo>
 
using namespace std;




template <typename M>

M calc (M a,M b,M c)
{
	return (a+b-c);
}


int main ()
{
	cout << calc<int>(5,5,5)<<endl;
	cout << calc<double>(5.2,5.4,5.3)<<endl;
	cout << calc<char>(5,5,5)<<endl;
	cout << calc<bool>(1,0,1)<<endl;
}
