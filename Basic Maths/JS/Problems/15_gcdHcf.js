let a=20;
let b=32;
// 20:1,2,4,5,10,20
// 32:1,2,4,8,16,32
for(i=a;i>=1;i--){
    if(a%i===0 && b%i===0){
        console.log("HCF/GCF :",i);
        break;
    }
}