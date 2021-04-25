# include <iostream>
#include <cmath>
#include <cstdlib>
#include <conio.h>
using namespace std;
int main()
{
  
    
    int a,b,c,o,ab;
    E21:
    switch(_getch())
	{
		case 48 :{ cout<<'0'; a=a*10+0;  } break;
		case 49 :{ cout<<'1'; a=a*10+1;  } break;
		case 50 :{ cout<<'2'; a=a*10+2;  } break;
		case 51 :{ cout<<'3'; a=a*10+3;  } break;
		case 52 :{ cout<<'4'; a=a*10+4;  } break;
		case 53 :{ cout<<'5'; a=a*10+5;  } break;
		case 54 :{ cout<<'6'; a=a*10+6;  } break;
		case 55 :{ cout<<'7'; a=a*10+7;  } break;
		case 56 :{ cout<<'8'; a=a*10+8;  } break;
		case 57 :{ cout<<'9'; a=a*10+9;  } break;
		    default:
            
            cout << "nu corespunde pasului";
            break;
}
     switch(_getch()){
		case 43 :{ cout<<'+'; o=0; b=a; a=0; } break;
		case 45 :{ cout<<'-'; o=1; b=a; a=0; } break;
		case 42 :{ cout<<'*'; o=2; b=a; a=0; } break;
		case 47 :{ cout<<'/'; o=3; b=a; a=0; } break;
		
		case 61 :{ cout<<'='; 
		  
		  switch(o)
		  {
		  		case 0: cout<<b+a<<endl; break;
		  	case 1: cout<<b-a<<endl; break;
		  	case 2: cout<<b*a<<endl; break;
		  	case 3: cout<<(double)b/a<<endl;
		  	
		  	
		  }
	
		
		} a=0;break;
			
		
		case 27 :{  exit(0);  } break;
		
	}
	goto E21;
    return 0;
}
