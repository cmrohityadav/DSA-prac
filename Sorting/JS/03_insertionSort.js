let arr = [10, 5, 12, 1, 3];
let n = arr.length;
console.log("Unsorted Array ", arr)

for(let i=1;i<n;i++){
    let key=arr[i];
    let j=i-1;
    while(j>=0 && arr[j]>key){
        arr[j+1]=arr[j];
        j--;
    }
    arr[j+1]=key;
}
console.log("Sorted Array   ", arr)
