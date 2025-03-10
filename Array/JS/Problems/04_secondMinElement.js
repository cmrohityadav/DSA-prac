let arr=[1,21,2,2,1,4,3,45,6,61,1,2,0]

let firstLowest=Math.min(arr[0],arr[1])
let secondLowest=Math.max(arr[0],arr[1])

for(let i=2;i<arr.length;i++){
    if(arr[i]<firstLowest){
        secondLowest=firstLowest;
        firstLowest=arr[i]  
    }else if(arr[i]<secondLowest && arr[i]!=firstLowest){
        secondLowest=arr[i]
    }
}

console.log(`first Lowest ${firstLowest} and second Lowest ${secondLowest}`)
