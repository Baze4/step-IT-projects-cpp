#include <iostream>
#include <cstdlib>
#include <map>
#include <ctime>
#include <iterator>
using namespace std;

int main()
{
	srand(time(0));
	map<int,int> vector;
	int n;
	n=rand()%3+1;
	cout<<"introduceti numerele din vector "<<endl;
	for (int i=0,l;i<n;i++)
	{
		cin>>l;
		vector[i]=l;
	}
	cout<<endl;
	cout<<"iteratori"<<endl;
	map<int,int>:: iterator ii=vector.begin();
	for(ii=vector.begin();ii!=vector.end();ii++)
	{
		cout<<ii->second<<endl;
		
		
	}
	cout<<endl;
	cout<<"fara iteratori"<<endl;
	for(int i=0,l;i<n;i++)
	{
		cout<<vector[i]<<endl;
	}
	return 0;
	
	
}
