/*
data: The raw input provided by the user. Initially, it is a Buffer (binary data).

Example: The user types John 25.
data: Buffer representation of John 25.
data.toString(): Converts the Buffer into a human-readable string.

Result: "Rohit 25"
trim(): Removes any leading or trailing spaces.

Result: "Rohit 25"
split(" "): Splits the string into an array based on spaces.

Result: ["Rohit", "25"]
const [name, age] = inputs: Destructures the array into two variables:


*/ 
let arrayInputs = [];

process.stdout.write("Enter Numbers (Space for Next Number): ");

process.stdin.on("data", (data) => {
    arrayInputs=data.toString().trim().split(" ")


    inputs = data.toString().trim().split(" ");
    const [sNumber1,sNumber2] = inputs;
    let iOne = parseInt(sNumber1, 10); //Convert to integer 10 is for decimal Number type
    let iTwo=parseInt(sNumber2,10);

let iRsultOfTwoNumber=iAddTwo(iOne,iTwo);
console.log(iRsultOfTwoNumber);

//agar hume exit hona hai to :: its asynchrous run continue takes input
process.exit()

});





function iAddTwo(iPhale,iDusra){
    return iPhale+iDusra;
}