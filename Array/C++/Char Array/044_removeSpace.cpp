#include<iostream>
#include<cstring>

using namespace std;
void  removeSpace( char sentence[]){

    int len=strlen(sentence);
        for(int i=0;i<len;i++){

            if(sentence[i]==' '){
                sentence[i]='@';
            }
        }

}
int main()
{

    char sentence[100];
    cin.getline(sentence,100);

    removeSpace(sentence);

    cout<<sentence<<endl;
    
    return 0;
}
