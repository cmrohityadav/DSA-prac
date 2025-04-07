let nums=[-2,1,-3,4,-1,2,1,-5,4]

let maxSum=-Infinity;
let sum=0;
for(let i=0;i<nums.length;i++){
    sum+=nums[i];

    if(sum<0){
        sum=0;
    }
    maxSum=Math.max(sum,maxSum)
}
console.log(maxSum)