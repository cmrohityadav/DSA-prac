/**
 * 1st term:0
 * 2nd term:1
 * 
 * e.g: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34
 */

//using iterative

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
