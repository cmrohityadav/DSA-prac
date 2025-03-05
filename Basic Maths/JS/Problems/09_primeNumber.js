/***
 * Jo number 1 and khud se divide hone pe remainder=0 ho
 * 
 */

let num=9;

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
