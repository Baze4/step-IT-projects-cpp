#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <windows.h>

using namespace std;

int main()
{
	int min=1,sec=1;
	
       
	
	cout<<"Enter min ";
	cin>>min;
	
	while(min!=0 || sec!=0)
	{
		system("cls");
		sec--;
		if(sec==-1)
		{
			min--;
			sec=59;
			
		}
		cout<<"00:";
		if(min<=9) cout<<"0"<<min;
		else cout<<min;
		cout<<":";
		if(sec<=9) cout<<"0"<<sec;
		else cout<<sec;
		
		
		Sleep(800);
		
	}
	
	
}
 
