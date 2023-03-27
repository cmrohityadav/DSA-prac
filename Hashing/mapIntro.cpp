#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;

int main()
{
    //creation 
    unordered_map<string,int>m;

    //insertion
    
    //1
    pair<string,int>p=make_pair("rohit", 3);
    m.insert(p);

    //2
    pair<string,int>pair2("yadav",2);
    m.insert(pair2);

    //3
    m["rahul"]=40;


//Searching
    cout<<m["rahul"]<<endl;
    cout<<m.at("rohit")<<endl;
    cout<<m["yehZeroDega_ZeroEntry"]<<endl;
    
    // cout<<m.at("yehKeyHaiHiNhi")<<endl;

    cout<<m["yehZeroDega_ZeroEntry"]<<endl;


//size
cout<<"size: "<<m.size()<<endl;

//to check presence
cout<<m.count("bro")<<endl;
cout<<m.count("rohit")<<endl;


//erase
cout<<"earse"<<endl;
m.erase("rohit");
cout<<"size: "<<m.size()<<endl;


cout<<"for each loop"<<endl;
for(auto i:m){

    cout<<i.first<<" "<<i.second<<endl;
}




//iterator
cout<<"\niterator"<<endl;

unordered_map<string,int>::iterator it=m.begin();
while (it!=m.end())
{
    cout<<it->first<<" "<<it->second<<endl;
    it++;
}


    return 0;
}
