let arr=[1,2,3,4,6,8];
let target=7;

function searchInsertPosition(arr,target){

    let start=0;
    let end=arr.length-1;

    while(start<=end){
        let mid=Math.floor((start+end)/2);

        if(target==arr[mid])return mid;
        else if(target>arr[mid]) start=mid+1;
        else end=mid-1;
    }

    return start;

}



console.log(searchInsertPosition(arr,target));