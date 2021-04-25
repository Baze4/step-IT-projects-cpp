#include <iostream> 
#include <Windows.h>
using namespace std; 
  


int main() 
{ 
int ore = 0; 
int minute = 0; 
int secunde = 0; 


system("cls");
  cout<<"Timer              \n";
  cout<<"ore=  "<<ore;
  cout<<"\nminute=  "<<minute;
  cout<<"\nsecunde=  "<<secunde;




     
    while (true) { 
          
        
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
    return 0; 
} 
