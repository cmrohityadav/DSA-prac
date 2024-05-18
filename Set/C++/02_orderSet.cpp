#include<iostream>
#include<set>
using namespace std;

int main()
{
    
    set<int>set1;
    // set<int,greater<int>>set1;

//insertion
    set1.insert(3);
    set1.insert(2);
    
    cout<<set1.size()<<endl;

    set1.insert(3);
    cout<<set1.size()<<endl;

cout<<"\n\n"<<endl;


    //size remains same bcz duplicate value is added
    //and sets contains only unique values

    //iterator for traversing a set
    // set_name.begin(): iterator pointing to the first element of my set
    //set_name.end(): iterator pointing to the position after the last element of set

//traversing 
    set<int>::iterator itr;
    for(itr=set1.begin();itr !=set1.end();itr++){
        cout<<*itr<<endl;
    }
    cout<<endl;


cout<<"\n\n"<<endl;

for(auto value:set1)
{
    cout<<value<<" ";
}

    

cout<<"\n\n"<<endl;

//deletion

//set_name.erase(value) => //TC O(logN)
//set_name.erase(position) => //TC O(logN)
//set_name.erase(start position,end position) //TC O(N)
//deletes element from start pos including it,till end pos excluding end pos



set<int>set2;
set2.insert(5);
set2.insert(4);
set2.insert(3);
set2.insert(2);
set2.insert(1);

for(auto value:set2){
    cout<<value<<" ";
}

cout<<endl;
//  set2.erase(4);

auto itr2 =set2.begin();
advance(itr2,3);
set2.erase(itr2);
for(auto value:set2){
    cout<<value<<" ";
}

cout<<endl;



//search operations

if(set2.find(3)!=set2.end()){
    cout<<"value is present "<<endl;

}
else{
    cout<<"value is not present"<<endl;
}


    return 0;
}
