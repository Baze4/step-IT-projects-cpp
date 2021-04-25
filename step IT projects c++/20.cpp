#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	srand(time(0));
	
	int A[100];
	int B[100];
	int S[100];
	int Q,R;
	
	int n=rand()%10+1;
	
	for(int i=0;i<n;i++)
	{
		
		A[i]=rand()%10+1;
		B[i]=rand()%10+1;
		
	}
	
	cout<<endl;
	
	for(int i=0;i<n;i++){
		
		cout <<setw(3)<<A[i];
	}
	cout<<endl;
	
	for(int i=0;i<n;i++){
		
		cout <<setw(3)<<B[i];
	}
	
	
	for(int i=0;i<n;i++){
		
		S[i]=A[i]+B[i];
		
	
	}
	
	cout<<endl;
	
		for(int i=0;i<n;i++){
		
		cout <<setw(3)<<S[i];
	}
	

	for(int i=0; i<n; i++){
	
	
    Q=A[i];
    A[i]=B[i];
    B[i]=Q;
    
    
}
	

	cout<<endl;
	cout<<endl;
	cout<<endl;
	
	

	for(int i=0;i<n;i++){
		
		cout <<setw(3)<<A[i];
		
	}
	
	cout<<endl;
	
	
		for(int i=0;i<n;i++){
		
		
		cout <<setw(3)<<B[i];
	}
	
for(int i=0; i<n; i++){
	
	
    Q=A[(n-1)-i];
    A[(n-1)-i]=B[i];
    B[i]=Q;
    
    
}
	
	
	cout<<endl;
	cout<<endl;
	
		

	

	


	
}
