let arr=[-1,5,6,4,-7,-5,5,2,+7,8,-9,5]

let i=0,j=0;
while(i<arr.length){
    if(arr[i]<0){
        let temp=arr[i]
        arr[i]=arr[j]
        arr[j]=temp;
        j++;
    }
    i++;
}
console.log(arr)