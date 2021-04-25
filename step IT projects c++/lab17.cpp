#include <iostream>

#include <iomanip>

#include <cstdlib>

#include <ctime>

using namespace std;

int main()

{

srand(time(0));


int v[100];

int z[100],k=0;


v[0]=4;


for(int i=1; i<v[0]*4; i+=4)

{

v[i+0]=rand()%10+1;

v[i+1]=rand()%10+1;

v[i+2]=rand()%10+1;

v[i+3]=v[i+0]+v[i+1]-v[i+2];

cout<<" v["<<i+0<<"]="<<v[i+0]
<<" v["<<i+1<<"]="<<v[i+1]
<<" v["<<i+2<<"]="<<v[i+2]
<<" v["<<i+3<<"]="<<v[i+3]<<endl;

}

for(int i=1; i<v[0]*4; i++)

{

cout<<setw(3)<<v[i];

}

cout<<endl;

int n=5;

for(int i=0; i<n; k++,i+=2)

{

if() z[k]=v[i]+v[i+1];

else z[k]=v[i]+0;

cout<<setw(3)<<v[i]<<setw(3)<<v[i+1]<<" = z["<<k<<"]="<<z[k]<<endl;

}

return 0;

}
