function printNto1(number){
   
    if(number==0) return;

    console.log(number);

    printNto1(number-1);

}

printNto1(10);