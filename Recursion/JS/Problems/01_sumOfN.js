function sumOfNNum(number){
    
    if(number==1) return 1;

    return number+sumOfNNum(number-1);
}

console.log(sumOfNNum(3))