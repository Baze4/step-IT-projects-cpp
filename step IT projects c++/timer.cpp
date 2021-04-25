
#include <iostream> 
#include <unistd.h> 
#include <Windows.h>
using namespace std; 
  

int ore = 0; 
int minute = 0; 
int secunde = 0; 
  
void afishare() 
{ 
  
  system("cls");
  cout<<"Timer              \n";
  cout<<"ore=  "<<ore;
  cout<<"\nminute=  "<<minute;
  cout<<"\nsecunde=  "<<secunde;
    
} 
  
void timer() 
{ 

    while (true) { 
          
        
        afishare(); 
  
       
        sleep(1); 
  
        
        secunde++; 
  
         
        if (secunde == 60) { 
          
            
            minute++; 
  
          
            if (minute == 60) { 
          
               
                ore++; 
                minute = 0; 
            } 
            secunde = 0; 
        } 
    } 
} 
  

int main() 
{ 
     
    timer(); 
    return 0; 
} 
