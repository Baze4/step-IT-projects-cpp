#include<iostream>
#include<cstdlib>
#include<ctime>
#include<string>

 

#include<fstream>
   
using namespace std;

 

/*
    1. ofstream
    2. ifstream
    3.  fstream
    
    3.1. ios::out - w+
    3.2. ios::in  - r+
    3.3. ios::app - a+

 

*/             

 

int main()
{
    
    //FILE *fp;
    
    // fopen => NULL ,   fclose
/*    
    ofstream OF; 
    
    OF.open("STEP1925.TXT");
    
    if( OF.fail() ){  cout<<"ofstream - Error FILE"<<endl; exit(1);    }
    else {  cout<<"ofstream - OK FILE"<<endl;     }
    
    OF << "step_2020_1925_";
    
    OF.close();
   */
  /*   
    string S; 
    
    cout<<" Enter nume file :: " ;
    cin>>S;
    
    S+=".txt";
       
    ofstream OF; 
    
    OF.open(S.c_str());
    
    if( OF.fail() ){  cout<<"ofstream - Error FILE"<<endl; exit(1);    }
    else {  cout<<"ofstream - OK FILE"<<endl;     }
    
    for(int i=0; i< S.length(); i++)
    OF << S[i];
    
    OF.close();
 */
 /*
    ofstream *OF = new ofstream; 
    
    OF->open("STEP1925p.TXT");
    
    if( OF->fail() ){  cout<<"ofstream - Error FILE"<<endl; exit(1);    }
    else {  cout<<"ofstream - OK FILE"<<endl;     }
    
    *OF << "_step_2020_1925_";
    
    OF->close();
    
    delete OF;
    
    */   
   /* 
    string STR;
     
    char S[255];
    
    ifstream IF;
    
    IF.open("STEP1925.TXT");
    
    if( IF.fail() ){  cout<<"ifstream - Error FILE"<<endl; exit(1);    }
    else {  cout<<"ifstream - OK FILE"<<endl;     }
    

 

      int i=0;
     while( !IF.eof() )
     {
         //STR+=(char)IF.get(); 
         //cout<<(char)IF.get(); 
        // IF >> STR;
        
         //S[i]=(char)IF.get();
        IF >> S[i] ;
         i++;
     }
       S[i]=0;
     
     cout<<" STR="<<STR<<endl;
     cout<<" S="<<S<<endl;
     
         
     //IF.getline(S,sizeof(S));
     
    IF.close();
       
       */
       srand(time(0));
       
       fstream F("xxxSTEPxxx.txt", ios::out);
       
       //F.open("xxxSTEPxxx.txt", ios::out);
       
       if(  F.fail() ){  cout<<" fstream - Error FILE"<<endl; exit(1);    }
        else {  cout<<" fstream ios::out - OK FILE"<<endl;     }
    
       int n = 10;
       F << n << endl;
       
       for(int i=0; i<n; i++)
       {
            F << ( rand()%10+rand()%10-rand()%10 ) << endl;
       }
        
       F.close();
       
       int V[1000];
       F.open("xxxSTEPxxx.txt", ios::in);
       
       if(  F.fail() ){  cout<<" fstream - Error FILE"<<endl; exit(1);    }
        else {  cout<<" fstream ios::in - OK FILE"<<endl;     }
       
       
       int N=0, S=0; 
       
         F >> N;
       
       for(int i=0; i<N; i++)
       {
            F >> V[i];
            
            if(V[i]%2==0) S+=V[i];
            
       }
       
       for(int i=0; i < N; i++ ) 
        cout<<" V["<<i<<"]="<<V[i]<<endl;
       
       
       cout<<" S="<<S<<endl;
       
       F.close();
       
       
}
