// 20:1,2,4,5,10,20
// 32:1,2,4,8,16,32
let a=32, b=20;

while(a!=b){
    if(a>b) a=a-b;
    else b=b-a;
}

console.log("HCF :",a)