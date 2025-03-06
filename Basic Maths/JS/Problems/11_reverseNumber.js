let num=123

if(num<0){
 console.log("Enter only positive number")
}else{
        let reverse=0;
        while(num>0){
            lastDigit=num%10;
            reverse=reverse*10+lastDigit;
            num=Math.floor(num/10)
        }
        console.log("Reverse number: ",reverse)

}