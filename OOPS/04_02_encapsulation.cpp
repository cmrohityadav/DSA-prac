#include<iostream>
using namespace std;

class Student{
    private:
    string name;
    int age;
    int height;
     public:
     int getAge(){
       return this->age;
     }
     int setAge(int age){
         return this->age=age;
     }
};
int main()
{
    
    Student be;
    be.setAge(40);
    cout<<be.getAge()<<endl;
    return 0;
}
