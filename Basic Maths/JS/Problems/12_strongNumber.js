let num=145

if(num<0){
 console.log("Enter only positive number")
}else{
        let sum=0;
        let orginal=num;
        while(num>0){
            let lastDigit=num%10;
            let fact=1;
            for(let i=1;i<=lastDigit;i++){
                fact*=i;
            }
            num=Math.floor(num/10)

            sum+=fact;
        }

        if(sum==orginal) {
            console.log("Strong number")
        }   
        else{
            console.log("not strong number")
        }
        

}