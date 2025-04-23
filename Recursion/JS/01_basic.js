function printNTimes(n){
    if(n==0) return;
    console.log("Hello World using recursion");
    printNTimes(n-1);
}

printNTimes(5);

for(let i=1;i<=5;i++){
    console.log("Hello World using iteration");
}