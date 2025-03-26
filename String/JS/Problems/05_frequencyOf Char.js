let str="yadav"
let arr=new Array(128).fill(0)

for(let i=0;i<str.length;i++){
    let asciiValue=str.charCodeAt(i)
    arr[asciiValue]=arr[asciiValue]+1;

}
console.log(arr)

for(let i=0;i<arr.length;i++){
    if(arr[i]>0){
        console.log(String.fromCharCode(i)," appear at ",arr[i]," times")
    }
}