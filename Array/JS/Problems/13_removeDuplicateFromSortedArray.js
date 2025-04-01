let arr=[0,1,1,2,2,2,4,5,6,7,8,9,9,9]
let j=1;
for(let i=0;i<arr.length;i++){
    if(arr[i]!=arr[i+1]){
        arr[j]=arr[i+1]
        j++;
    }
}
console.log(j)