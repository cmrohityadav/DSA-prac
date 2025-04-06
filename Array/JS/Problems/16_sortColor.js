// in place means :: actual array me

let colors=[0,1,2,0,1,0,1,2,0,1,2,0,1,1]

let i=j=0;
let k=colors.length-1;

function swap(arr,i,j){
    let temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}

while(i<=k){
    if(colors[i]==0){
        swap(colors,i,j);
        i++;
        j++;

    }else if(colors[i]==1){
        i++;

    }else if(colors[i]==2){
        swap(colors,i,k);
        k--;
    }
}

console.log(colors)