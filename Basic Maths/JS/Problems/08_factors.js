let n = "100"
n = Number(n);
if (isNaN(n)) {
    console.log("Enter number only")
    return

}
if (n < 0) {
    console.log("Enter  +v number only")
    return
}

for(let i=1;i<=n;i++){
    if(n%i===0){
        console.log(i)
    }
}
console.log("Optimise")
for(let i=1;i<=Math.floor(n/2);i++){
    if(n%i===0){
        console.log(i)
    }
    console.log(n)
}




