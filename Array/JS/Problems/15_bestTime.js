let arr=[7,1,5,3,6,4]


function maxProfit(prices){
    let mProfit=0;
    let min=prices[0];

    for(let i=0;i<prices.length;i++){
        if(prices[i]<min){
            min=prices[i];
        }
        let profit=prices[i]-min;
        mProfit=Math.max(mProfit,profit)
    }
    return{ mProfit}
}

console.log(maxProfit(arr))
