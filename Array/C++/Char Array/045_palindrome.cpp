#include<iostream>
#include<cstring>
using namespace std;

bool palimdromeCheck(char sentence[]){
    int size=strlen(sentence);
    int s=0;
    int e=size-1;
bool flag=false;
    while (s<=e)
    {
        if(sentence[s++]==sentence[e--]){
                    flag=true;
        }else{
            flag=false;
            return flag;
        }

    }
    return flag;
    


}
int main()
{

    char sentence[100];
    cin.getline(sentence,100);

   cout<<palimdromeCheck(sentence);

    
    return 0;
}
