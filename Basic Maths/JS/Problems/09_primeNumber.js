/***
 * Jo number 1 and khud se divide hone pe remainder=0 ho
 * 
 */

let num=11;

if(num<2){
    console.log("Enter number more than 1")
}else{
    primeHai=true;
    for(let i=2;i<=Math.floor(num/2);i++){
        if(num%i==0){
            primeHai=false;
            break;
        }
    }

    primeHai?console.log("prime"):console.log("not prime")
}
console.log(isPrime(num))
function isPrime(num){
    if(num<=1) return false;
    if(num===2) return true;
    if(num%2===0) return false;
    for(let i=3;i<=Math.floor(Math.sqrt(num));i+=2){
        if(num%i===0) return false;
    }
    return true;
}
