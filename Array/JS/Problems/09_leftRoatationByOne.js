let arr=[2,9,6,5,4,5]

let firstElement=arr[0];
for(let i=0;i<arr.length-1;i++){
    arr[i]=arr[i+1];
}
arr[arr.length-1]=firstElement;

console.log(arr)

