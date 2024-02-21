#include<iostream>
#include<unordered_map>
using namespace std;

int main()
{
    // creation
    unordered_map<string,int>m;

    // insertion
    pair<string,int>p=make_pair("scorpio",9);
    m.insert(p);

    pair<string,int>p1("alto",2);
    m.insert(p1);

    m["fortuner"]=10;

    // access 
    cout<<m.at("alto")<<endl;
    cout<<m["fortuner"]<<endl; // op 10
    


    // search
    cout<<m.count("fortuner")<<endl; 
    cout<<m.count("Fortuner")<<endl;
    cout<<m.count("tata")<<endl;

   if(m.find("fortuner")==m.end()){
     cout<<"fortuner not present"<<endl;
       
   }else{
    cout<<"fortuner is present "<<endl;
   }

    cout<<"size: "<<m.size()<<endl;

    cout<<"new item without value: "<<m["mahindra"]<<endl;
    cout<<"size: "<<m.size()<<endl;


cout<<"printing all entries"<<endl;

for(auto i:m){
    cout<<i.first<<" -> "<<i.second<<endl;
}


    return 0;
}
