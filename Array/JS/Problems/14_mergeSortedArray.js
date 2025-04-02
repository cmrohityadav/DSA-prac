let arr1 = [2, 5, 60];  
let arr2 = [1, 3, 4, 7, 8, 9];
// 1st 

let merge=new Array(arr1.length+arr2.length)
 let prt1=0;
 let prt2=0;

 for(let i=0;i<merge.length;i++){
    if(  prt2<arr2.length && prt1<arr1.length && arr1[prt1]>arr2[prt2] ){
        merge[i]=arr2[prt2];
        prt2++;
        continue;
       
       
    }else if( prt2<arr2.length && prt1<arr1.length && arr2[prt2]>arr1[prt1] ){
        merge[i]=arr1[prt1];
        prt1++;
        continue;
       
    }else if(prt1==arr1.length){
        merge[i]=arr2[prt2];
        prt2++;
        continue;

        
       
    }else if(prt2==arr2.length){
        merge[i]=arr1[prt1];
        prt1++;
        continue;
       
       
    }

 }

 console.log(merge)