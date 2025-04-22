function printNTimes(n){
    if(n==0) return;
    console.log("Hello World");
    printNTimes(n-1);
}

printNTimes(5)