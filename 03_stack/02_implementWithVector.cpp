#include<iostream>
#include<vector>
class Stack{
private:
std::vector<int>dynamicArray;
public:
void push(int val){
    dynamicArray.push_back(val);
}

void pop(){
    if(dynamicArray.size()==0){
        std::cout<<"Stack is Empty!!..nothing to pop out"<<std::endl;
        return;
    }
    dynamicArray.pop_back();
}

int top(){
    if(dynamicArray.size()==0){
        std::cout<<"Stack is Empty!!"<<std::endl;
        return -1;
    }
    int topElement=dynamicArray[dynamicArray.size()-1];
    return topElement;
}

bool empty(){
    if(dynamicArray.size()==0){
        return true;
    }
    return false;
}

};
int main(){

    Stack myStack;

    myStack.push(10);
    std::cout << myStack.top() << std::endl;

    myStack.push(20);
    std::cout << myStack.top() << std::endl;

    myStack.pop();
    std::cout << myStack.top() << std::endl;

    myStack.pop();
    std::cout << myStack.top() << std::endl;
   
    if(myStack.empty()){
        std::cout<<"Now stack is empty"<<std::endl;
    }else{
        std::cout<<"Now stack is not empty"<<std::endl;
    }
    


}