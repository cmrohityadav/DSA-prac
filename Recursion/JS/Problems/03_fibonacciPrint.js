/**
 * 1st term:0
 * 2nd term:1
 * 
 * e.g: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34
 */

//using iterative
/*
let first=0;
let second=1;
process.stdout.write(first+" "+second+" ")
let n=6//term
for(let i=1;i<=n-2;i++){
    let third=first+second;
    first=second;
    second=third
    process.stdout.write(third+" ")
}

*/

// using recursion

function printFib(n,first,second){

if(n==1 || n==0) return;
let third=first+second;
process.stdout.write(third+" ")

printFib(n-1,second,third)
}

let n=6
process.stdout.write(0+" "+1+" ")
printFib(n-1,0,1)
