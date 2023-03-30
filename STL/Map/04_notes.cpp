Note and Code :)
#include <bits/stdc++.h>
using namespace std;
/*
- A map element has a key and a corresponding value mapped to it.
- Internal implementation of map is Red Black Tree
- So map is basically a pair that stores key and values.
- Map elements are not stored in contiguous blocks... the elements are connected through links. Thus while using iterator dont use it+1 ....u should either use it++ or ++it
- Map → It stores the keys in ascending order
- Unordered Map → No order.
*/
void printmap(map <int,string> &m)
{
    cout<<"Size:"<<m.size()<<endl;
    for(auto &val:m)
        cout<<val.first<<" "<<val.second<<endl;
    cout<<endl;
}
int main()
{
    map <int,string> m;
    m[3]="diid";
    m[7]="eiiw";
    m[6];   //this will initialise the value as empty string..if value is of int type than it would be initialised as 0
    m.insert({5,"sfig"});
    m[2]="aido";
    map<int,string> ::iterator it;
    for(it=m.begin();it!=m.end();it++)
        cout<<it->first<<" "<<it->second<<endl;
    //accessing(m.size(),m.find() etc..),declaring(m[6];) ,initialising(m[3]="diid",m.insert({4,"ffij"})) takes O(logn)
		//But accessing elements using an iterator takes O(1) time...even when u use it++
    //so printing the values will take O (n) time
    cout<<endl;
    m[7]="ffoi";//Keys in a map are unique..so when u try to insert a new value it will replace the old one 
    printmap(m);
    auto itp=m.find(3);//find returns an iterator pointing to that key in log n time
    if(itp==m.end())//If the key is not present in the map the iterator will point to m.end()
        cout<<"value not found"<<endl<<endl;
    else
         cout<<itp->first<<" "<<itp->second<<endl<<endl;
         
    m.erase(5);//You can pass the key or an iterator....log(n);
    printmap(m);
    if(itp!=m.end())//make sure that the iterator points to a valid key...else it will show segmentation fault
        m.erase(itp);
    printmap(m);
    m.clear();//this will erase the whole map m
    printmap(m);
    
    //Insertion takes place by comparing the new key with existing keys..
    //If key is an int ...it will require O(logn) time to compare..where n is the size of the map
    //If key is a string of length x..then time required to compare..i.e.insertion...will be O(x*logn) 
    
    /*
    Q.given n strings and q queries.In each query you are given a string print its frequency
    n<=10^6 q<=10^6
    |s|<=100   |s|-> length of the string
    */
    map<string,int> m1;
    int n,i;
    string x;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>x;
        m1[x]++;
    }
    for(auto itm1:m1)
        cout<<itm1.first<<" "<<itm1.second<<endl;
    //If the length of string |S|<=10^5 ...then doing this will exceed the time limit..coz time complexity would be (10^5)*(10^5)*log10^5
}

/*
INPUT:
8
abc
def
abc
ghj
jkl
ghj
ghj
abc

OUTPUT:
2 aido
3 diid
5 sfig
6 
7 eiiw

Size:5
2 aido
3 diid
5 sfig
6 
7 ffoi

3 diid

Size:4
2 aido
3 diid
6 
7 ffoi

Size:3
2 aido
6 
7 ffoi

Size:0

abc 3
def 1
ghj 3
jkl 1
*/