// 20:1,2,4,5,10,20
// 32:1,2,4,8,16,32
let a=32, b=20;

function hcf(a,b){
    if(a==b) return a;

    if(a>b){
      return  hcf(a-b,b);
    }else{
      return  hcf(a,b-a);
    }

}

console.log("gcd : ",hcf(a,b))



//optimised
 function hcf2(a,b){
  if(b==0) return a;
  return hcf2(b,a%b);
 }

 console.log("gcd2 : ",hcf2(a,b))
