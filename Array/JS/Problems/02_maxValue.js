let arr=[1,50,20,40,100,20]

let maxValue=arr[0]
for(let i=1;i<arr.length;i++){
    if(arr[i]>maxValue){
        maxValue=arr[i]
    }
}

console.log(`Max value : ${maxValue}`)
