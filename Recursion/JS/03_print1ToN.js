function print1ToN(number){
    // base condition
    // rukna kab hai
    if(number==0) return;

    print1ToN(number-1);
    
    //function return hone k baad waha se wo function call hua hota hai yaha se ,wo line se next line pe jata hai
    // i.e. Jaha se func. call hua hota hai wahi pe return hota hai execution k badd
    // print value of number in present call stack

    console.log(number)

}

print1ToN(6)