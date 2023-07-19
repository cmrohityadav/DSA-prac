#include<iostream>
#include<unordered_map>

using namespace std;

int main()
{
    unordered_map<int,string>record;
    
    record.insert(make_pair(1,"rohit"));
    record[3]="om";
    record[2]="piyush";
     record[3]="Ram";
    record.insert(make_pair(1,"rahul"));


    for(auto kuchbhi:record){
        cout<<"Roll no-"<<kuchbhi.first<<" "<<kuchbhi.second<<endl;

    }
    return 0;
}
