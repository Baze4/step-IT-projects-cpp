#include<iostream>
#include<cstdlib>
#include<cstring>
#include<ctime>
#include<fstream>
#include<iomanip>
#include<conio.h>

using namespace std;

//using std::cout;
//using std::endl;


namespace a
{
	int x=rand()%10;
}
namespace b
{
	int x=rand()%10;
}
namespace c
{
	int x=rand()%10;
}



namespace Marcel_danu_tsari_vseh
{
	int x;
}

namespace c= Marcel_danu_tsari_vseh;

funcite- template <typename T>
clasa- template <class>





int main()
{
	

	/*
	namespace NUME_NAMESPACE
	{
	bloc instructiuni;
    }
	*/
	std::cout<<"STEP 2020 "<<endl;
	std::cout<<"STEP 2020 "<<endl;
	std::cout<<"STEP 2020 "<<endl;
	std::cerr<<"STEP ERROR 2020"<<endl;
	
	int a,b,c;
	
	a=100;
	b=200;
	c=999;
	cout<<"std :: a+b-c"<<a+b-c<<endl;
	
	a::x;
	b::x;
	c::x;

	
	std::cout<<a::x+b::x-c::x;
	
	
	
}
