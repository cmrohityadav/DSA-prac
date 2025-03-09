let arr=[5000,1,2,3,50,5,100,5000,7,8,700]

let firstMax=Math.max(arr[0],arr[1]);
let secondMax=Math.min(arr[0],arr[1]);

for(let i=2;i<arr.length;i++){
    if(arr[i]>firstMax){
        secondMax=firstMax
        firstMax=arr[i];
    }else if(arr[i]>secondMax && arr[i]!=firstMax){
        secondMax=arr[i];
    }

}

console.log(`first max stock ${firstMax} and second max stock ${secondMax}`)