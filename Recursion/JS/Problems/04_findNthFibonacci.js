/**
 * 0st term:0
 * 1nd term:1
 * 
 * e.g: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34
 */


// finding nth Fibonacci term

function NthFibonacciTerm(nTerm){

    if(nTerm===0) return 0;
    if(nTerm===1) return 1;

    return NthFibonacciTerm(nTerm-1)+NthFibonacciTerm(nTerm-2);

}

console.log(NthFibonacciTerm(4))