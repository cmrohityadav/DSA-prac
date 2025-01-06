process.stdout.write("Enter any Integrs :");

process.stdin.on("data",(bufferAnyNumber)=>{
    let sAnyNumber=bufferAnyNumber.toString().trim();
    let iNumber=parseInt(sAnyNumber,10); // we can parse into int if we want
    if(sAnyNumber%2===0){
        console.log(`${sAnyNumber} is Even Number`)
    }else{
        console.log(`${sAnyNumber} is ODD Number`)
    }

   
    //exit if program done
    process.exit()
})