
const checkPalindrome=(str)=>{
    let i=0;
    let j=str.length-1;
    
    while(i<=j){
        if(str[i++]!=str[j--]) return false;
    }
    return true;
}
let str="malayalam"
checkPalindrome(str)?console.log("Palindrome"):console.log("Not Palindrome")