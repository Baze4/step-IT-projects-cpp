    #include <stdio.h>
    #include <iostream>
    #include <string.h>
    
    using namespace std;
    int main() {
        char s1[100] = "marcel", s2[100] = "danu";
        char s3[100];
        char s4[100];
        char s5[100];
        char s6[100];
        cin>>s3;
        cin>>s4;
        cin>>s5;
        cin>>s6;
        int  j;
        
        int  i=strlen(s1);
    
        for (j = 0; j<s2[j]; j++, i++) {
            s1[i] = s2[j];
        }
        s1[i] = '\0';
        
        cout<<s1<<endl;
        
        for(i=0 ; s3[i] == s4[i] && s3[i] == '\0'; i++)
        
        	if(s3[i]<s4[i])cout<<"[s3 mai mare]"<<endl;	
        	if(s3[i]>s4[i])cout<<"[s4 mai mare]"<<endl;	
        	else{ cout<<"[sunt egale]";}
        	
        	
        	for(int i=0;i<s3[i];i++)
        	{
        		if(s3[i]=='a')
				{
					cout<<"este in sir litera a ";break;
				}
				else
				{
					cout<<" nu este in sir litera a ";break;
				}
			}
			
			
			
		
		
  
}

    
  


