/*  // 1st level optimised: brute force solution

let arr=[0,1,2,3,4,5,6];

let k=2;

for(let i=1;i<=k;i++){
    let firstElement=arr[0];
    for(let j=0;j<arr.length-1;j++){
        arr[j]=arr[j+1];
    }
    arr[arr.length-1]=firstElement;
}
console.log(arr)


*/

/* // 2nd level optimised

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

*/

/*
 //3rd level: optimse but using extra space

let arr=[0,1,2,3,4,5,6];
k=2;

k=k%arr.length;
console.log("k ", k)
let tempArr=Array(arr.length)

for(let i=0;i<arr.length;i++){
    tempArr[i]=arr[(i+k)%arr.length]
}
console.log(tempArr)

*/




//4th level 

let arr=[0,1,2,3,4,5]
let k=2
reverse(0,k-1)
reverse(k,arr.length-1)
reverse(0,arr.length-1)

console.log(arr)

function reverse(i,j){
    while(i<=j){
        let temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }

}

 

 









 