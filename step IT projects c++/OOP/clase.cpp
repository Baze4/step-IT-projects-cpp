#include <iostream>

using namespace std;


class numele
{
public:
	
	char nume[100];
	
};





int main ()
{
	numele obj;

	cout<<"introdu numele tau= ";
	cin>>obj.nume;
	cout<<"numele="<<obj.nume;

	return 0;
}
