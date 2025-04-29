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

console.log(hcf(a,b))
