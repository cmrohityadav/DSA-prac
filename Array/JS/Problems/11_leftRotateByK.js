let arr=[1,2,3,4,5,6]
console.log(arr)
let k=5;
k=k%arr.length

let countOuterLopp=0;
for(let i=1;i<=k;i++){
    countOuterLopp++;

    let firstElement=arr[0]

    for(let i=0;i<arr.length-1;i++){
        arr[i]=arr[i+1]
    }
    arr[arr.length-1]=firstElement

}

console.log(arr)

console.log("counter: ",countOuterLopp)