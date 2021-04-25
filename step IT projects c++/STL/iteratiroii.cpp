#include <iostream>
#include <deque>
#include <vector>
#include <iterator>
#include <algorithm>
#include <string>
#include <cstdlib>

using namespace std;

int main()

{

/*

int V[100];

*(p+i) - parcurgerea - nu mai cind memoria este consecutiva

int x=10;

int *p;

p=&x;

*/

vector <int> vred;

vred.push_back(15);

//vred[0]=10;

vector <int>::iterator itred=vred.begin();

//vector <int>::const_iterator itred=vred.begin();

//*itred=12;

cout<<"Iterator constant :: "<<*itred<<endl;

vector <int> v;

vector <int>::iterator itv;

v.push_back(15);

v.push_back(24);

//Categoria 1. iteratori iesire

for(itv=v.begin(); itv!=v.end(); itv++)

cout << *itv <<endl;

cout<<endl;

//Categoria 2. iteratori intrare

for(itv=v.begin(); itv!=v.end(); itv++)

*itv=rand()%10;

//cin>>*itv; ERROR

for(itv=v.begin(); itv!=v.end(); itv++)

cout << *itv<<endl;

//Categoria 3. iteratori insertie

//3.1 - back_inserter<container>

cout<<endl;

vector<int> bi;

copy(v.rbegin(), v.rend(), back_inserter(bi));

for(itv=bi.begin(); itv!=bi.end(); itv++)

cout << *itv<<endl;

//3.2 - front_inserter<container>

cout<<endl;

deque <int> red1,red2;

red1.push_back(3);

red1.push_back(4);

red2.push_back(2);

red2.push_back(1);

copy(red2.begin(),red2.end(), front_inserter(red1));

for(deque<int>::iterator it = red1.begin(); it!= red1.end(); it++ )

cout <<"red1 = "<< *it<< endl;

//3.3 - " inserter<container, iterator>

// copy(red1.begin(), red1.end(), inserter(red2, red2.begin()+3));

//Categoria 4. Iteratori flux de iesire

cout<<"\nFlux de iesire"<<endl;

ostream_iterator<int> OutIt(cout," "); //intregii sunt separati prin spatii (\n)

copy(v.begin(),v.end(),OutIt);

//cout<<v.begin()<<" "<<v.begin()+1<<" "<<v.begin()+2<<" "<<v.begin()<<" "

// for(itv=v.begin(); itv!=v.end(); itv++)

// cout << *itv << " ";

cout<<endl;

//Categoria 5. Iteratori flux de intrare EOF - CTRL+Z == MAC - CTRL+D

vector<string> vs;

copy(istream_iterator<string>(cin),

istream_iterator<string>(),

back_inserter(vs));

typedef vector<string>::iterator asa;

for(asa i=vs.begin(); i!=vs.end(); i++)

cout << *i << " ";

cout << endl;

return 0;

}
