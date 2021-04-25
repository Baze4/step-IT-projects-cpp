#include<iostream>
#include<cstdlib>
#include<cstring>
#include<ctime>
#include<cmath>

 

#include<string>

 

using namespace std;

 


           class A 
           {  
                public:
                    
                int a,b=555; 
                     
A(int a=NULL){ this->a=a; cout<<"const A ="<<this->a<<endl;}
A(int a,int b){ this->a=a; this->b=b; cout<<"const A ="<<this->a<<" b="<<this->b<<endl;}
                
            ~A(){}
              
              void f(){  cout<<" A.f() "<<endl; }
              
           };
           class B  : public A
           {
             
           public:
           
           int b,c=666;
                        B(int b=888){ this->b=b; cout<<"const B ="<<this->b<<endl;    }
                    ~B(){}
                    
                    void f(){  cout<<" B.f() "<<endl; }
              
           };
           
           class C : public B
           {
             public:
             int a=777;    
             int c;
             
             
                  C(int c=NULL){ this->c=c; cout<<"const C ="<<this->c <<endl;    }
        
        
        C(int a, int b, int c)
            { this->c=c; cout<<"const C ="<<this->c<<endl;    }
            
        C(int a, int b, int c, int d)
            { this->c=c; cout<<"const C ="<<this->c<<endl;    }
                    
                    ~C(){}
                void f(){  cout<<" C.f() "<<endl; }
           };
           
int main()
{
    C x;
    cout<<endl;
    
    C y(1,2,3);
    cout<<endl;
    
    C z(1,2,3,4);
    
    cout<<"z.a= "<<z.a<<" z.b= "<<z.b<<"z.c= "<<z.c<<endl;
    
    cout<<"z.A::a= "<<z.A::a<<" z.A::b= "<<z.A::b<<"z.c= "<<z.c<<endl;
    
    z.f();
    z.A::f();
    z.B::f();
    
    
}
