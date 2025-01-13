#include<iostream>

int gcd(int a,int b){


    if(a>b){

        int rem=a%b;
        if(rem==0){
            return b;
        }

       return gcd(a,rem);

    }else{
       return gcd(b,a);
    }

}
int main(){

    int iOne;
    std::cout<<"Enter first Number: "<<std::endl;
    std::cin>>iOne;

    int iTwo;
    std::cout<<"Enter second Number"<<std::endl;
    std::cin>>iTwo;

    std::cout<<"gcd is : "<<gcd(iOne,iTwo)<<std::endl;






    return 0;
}