#include<iostream>
#include<cstdlib>

 

using namespace std;


int main()
{
	int n;
	n=4;
	char nume[100];
	for(int i=0;i<n;i++)
  {
  
	cin>>nume;
}

	
	char lung[100];
 
  
  for(int i=0;i<10;i++)
  {
  
  if (nume[i]>lung[i])lung[i]=nume[i];

}
  
	cout<<"cel mai lung nume ii= "<<lung;
}
