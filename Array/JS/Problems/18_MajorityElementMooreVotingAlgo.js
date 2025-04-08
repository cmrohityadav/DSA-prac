let arr=[1,1,2,3,1,2,2,3,3,3,3,1,1,1,1,1];

let ans=arr[0];
let count=1;

for(let i=1;i<arr.length;i++){
    if(count==0){
        ans=arr[i];
        count=1;
    }else if(arr[i]==ans){
        count++;
    }else{
        count--;
    }
}

 console.log("Majority : ",ans)