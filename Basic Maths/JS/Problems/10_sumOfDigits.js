let num=1221

if(num<0){
 console.log("Enter only positive number")
}else{
    let sum=0;
    while(num>0){
        lastDigit=num%10;
        sum+=lastDigit;
        num=Math.floor(num/10)
    }
    console.log(`Sum of Digit = ${sum}`)

}