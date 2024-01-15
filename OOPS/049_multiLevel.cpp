#include<iostream>
using namespace std;
class Car{
  public:
  string Origin;
};
class TataMotar:public Car{
    public:
    int warranty;


};
class Nexon : public TataMotar{
    public:
    int capacity;

    void print(){
        cout<<this->Origin<<" "<<this->capacity<<" "<<this->warranty<<" "<<endl;
    }
};

int main()
{
    Nexon rohit;
    rohit.Origin="India";
    rohit.capacity=100;
    rohit.warranty=2;

    rohit.print();

    return 0;
}
