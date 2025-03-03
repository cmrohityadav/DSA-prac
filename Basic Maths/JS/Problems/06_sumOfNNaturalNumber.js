// 1,2,3.......} Natural numbe
// 0,1,2,3.......} whole number

let n="3q"
n=Number(n);
if(isNaN){
    console.log("Enter number only")
    return

}
 if(n<0){
    console.log("Enter  +v number only")
    return

 }
let sum=0;
for(let i=1;i<=n;i++){
    sum=sum+i
}

console.log(`sum of ${n} natural number : ${sum}`)

