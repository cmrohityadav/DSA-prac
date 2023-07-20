#include<iostream>

using namespace std;


bool checkPalindrome(char name[],int size){
    int start=0;
    int end=size-1;
    while (start<=end)  
    {
        if(name[start++]!=name[end--]){
            return 0;
        }

       
    }
 return 1;
    
}

void reverse(char name[], int n);

int getLen(char name[]);

int main()
{

    char name[20];
    cout<<"enter name :"<<endl;
    cin>>name;
    cout<<"your name is "<<name<<endl;
    int len=getLen(name);

    cout<<"palindrome  or not :"<<checkPalindrome(name,len);

    // reverse(name,name);

    // cout<<"reverse"<<name<<endl;

    // reverse(name,len);
    // cout<<name;

    //palindrome


    
    return 0;
}




int getLen(char name[]){
    int count=0;
    for(int i = 0; name[i] != '\0';i++){

        count++;

    }

    return count;
}
void reverse(char name[], int n){
    int s=0;
    int e=n-1;
    while (s<=e)
    {
       swap(name[s++],name[e--]);
    }
    


}