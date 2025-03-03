// 1,2,3.......} Natural numbe
// 0,1,2,3.......} whole number

let n="3"
n=Number(n);
if(isNaN(n)){
    console.log("Enter number only")
    return

}
 if(n<0){
    console.log("Enter  +v number only")
    return

 }
let fact=1;
for(let i=1;i<=n;i++){
    fact=fact*i;
}

console.log(`factorial of ${n} : ${fact}`)

