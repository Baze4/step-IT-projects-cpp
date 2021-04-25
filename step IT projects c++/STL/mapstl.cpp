#include <iostream>
#include <iterator>
#include <map>
using namespace std;

int main()
{

multimap <char,int> myMultimap;

map <char,int> myMap;

char c;

for (int i = 10,c = 'a'; i < 16; ++i,++c)
{
//myMap.insert( pair<char,int>(c,i) );
myMap [c] = i;
}

myMultimap.insert ( pair<char,int>('a',146) );
myMultimap.insert ( pair<char,int>('b',23) );
myMultimap.insert ( pair<char,int>('c',996) );
myMultimap.insert ( pair<char,int>('a',56) );
myMultimap.insert ( pair<char,int>('b',121) );
myMultimap.insert ( pair<char,int>('c',121) );

map <char,int>::iterator itMap = myMap.begin();
multimap <char,int>::iterator itMultimap = myMultimap.begin();

cout<<"myMap contains: \t myMultimap contains:\n";

for(itMap = myMap.begin(),itMultimap = myMultimap.begin(); itMultimap != myMultimap.end(); itMap++,itMultimap++)
{
cout << itMap->first << " : " << itMap->second << "\t\t\t\t" << itMultimap->first << " : " << itMultimap->second << endl;
}

//a ? da : nu;

for(c = 'a'; c <= 'f'; c++)
{
myMap.count(c) ? cout << "\nNumber of elements '" << c << "' in myMap = " << myMap.count(c) : cout << "\nElement '" << c << "' is not in myMap ";
myMultimap.count(c) ? cout << "\nNumber of elements '" << c << "' in myMultimap " << myMultimap.count(c) : cout << "\nElement '" << c << "' is not in myMultimap";
}

itMap = myMap.find('b');
itMultimap = myMultimap.find('a');

myMap.erase(itMap);
myMultimap.erase(itMultimap);

itMap = myMap.find('d');
itMultimap = myMultimap.find('d');

myMap.erase(itMap,myMap.end());
myMultimap.erase(itMultimap,myMultimap.end());

cout << "\n\nmyMap contains: \t myMultimap contains:\n";
for(itMap = myMap.begin(),itMultimap = myMultimap.begin(); itMap != myMap.end(); itMap++,itMultimap++)
{
cout << itMap->first << " : " << itMap->second << "\t\t\t\t" << itMultimap->first << " : " << itMultimap->second << endl;
}

myMap.clear();
myMap.empty() ? cout << "\nmyMap is empty\n" : cout << "myMap is not empty\n";
myMultimap.empty() ? cout << "\nmyMultimap is empty\n" : cout << "myMultimap is not empty\n";

return 0;
}
