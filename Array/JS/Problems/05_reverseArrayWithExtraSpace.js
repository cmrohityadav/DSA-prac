let arr=[10,20,30,40,50]
let temp=new Array(arr.length);

for(let i=arr.length-1;i>=0;i--){
    temp[(arr.length)-i-1]=arr[i] 
}

console.log(temp)