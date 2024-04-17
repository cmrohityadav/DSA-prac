#include <iostream>
#include <stack>
using namespace std;

stack<int> copyStack(stack<int> &input)
{
    stack<int> temp;
    while (!input.empty())
    {
        int currentItem = input.top();
        input.pop();
        temp.push(currentItem);
    }

    stack<int> result;
    while (!temp.empty())
    {
        int currentItem = temp.top();
        temp.pop();
        result.push(currentItem);
    }

    return result;
}
void copyStackRecurssion(stack<int> &st1, stack<int> &result)
{
    if (st1.empty())
        return;
    int element = st1.top();
    st1.pop();
    copyStackRecurssion(st1, result);
    result.push(element);
}

int main()
{

    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
 
    stack <int> result=copyStack(st);
    while(! result.empty()){
        cout<<result.top()<<endl;
        result.pop();
    }
    cout<<"st1 here"<<endl;
    stack<int> st1;
    st1.push(1);
    st1.push(2);
    st1.push(3);
    st1.push(4);
    stack<int> result1;
    copyStackRecurssion(st1, result1);
    while (!result1.empty())
    {
        cout << result1.top() << endl;
        result1.pop();
    }


    return 0;
}