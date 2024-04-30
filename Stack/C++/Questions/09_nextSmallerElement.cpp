#include<iostream>
#include<vector>
#include<stack>

using namespace std;

vector<int>nse(vector<int>&arr){
int n=arr.size();
vector<int> output(n,-1);

stack<int>st;
st.push(0);
for(int i=1;i<n;i++){

    while(!st.empty() && arr[i]<arr[st.top()]){
        output[st.top()]=arr[i];
        st.pop();
    }
    st.push(i);
}
return output;

}

int main(){

    vector<int>v;
    int n;
    cin>>n;
    while(n--){
        int x;
        cin>>x;
        v.push_back(x);
    }

    vector<int>res=nse(v);
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<" ";
    }
    return 0;
}