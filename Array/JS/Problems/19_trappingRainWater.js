let height=[4,2,0,3,2,5]
console.log("Orig Array   ",height)
let left=[]
let right=[]
let leftMax=height[0];
let rightMax=height[height.length-1];
let j=height.length-1;

for(let i=0;i<height.length;i++){
    if(height[i]>leftMax){
        leftMax=height[i];
    }
    left[i]=leftMax;

    if(height[j]>rightMax){
        rightMax=height[j]
    }
    right[j--]=rightMax
}

console.log("Left array   ",left)
console.log("right array  ",right)
let demoArr=[]


let sum=0;
for(let i=0;i<height.length;i++){
    let min=Math.min(left[i],right[i])
    sum+=(min-height[i]);

    
    demoArr[i]=(min-height[i]);
}


console.log("trapped water",demoArr)
console.log(sum)