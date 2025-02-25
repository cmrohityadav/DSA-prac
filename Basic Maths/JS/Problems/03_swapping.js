let a=10;
let b=20;

console.log("Before Swapping ")
console.log(`a is ${a} and b is ${b}`)

let c=a;
a=b;
b=c;

console.log("After Swapping")
console.log(`a is ${a} and b is ${b}`)


// using without 3rd varaible
let glassOneWaterMl=100;
let glassTwowaterMl=200;
console.log("Before Swapping ")
console.log(`glass A is ${glassOneWaterMl} and B is ${glassTwowaterMl} Ml`)

glassOneWaterMl=glassOneWaterMl+glassTwowaterMl; //one=100+200=300
glassTwowaterMl=glassOneWaterMl-glassTwowaterMl // two=300-200=100
glassOneWaterMl=glassOneWaterMl-glassTwowaterMl// one=300-100=200

console.log("After Swapping")
console.log(`glass A is ${glassOneWaterMl} and B is ${glassTwowaterMl} Ml`)


console.log("Before Swapping ")
let xx=30;
let yy=60;
console.log(`x is ${xx} and y is ${yy}`)
[xx,yy]=[yy,xx]
console.log("After Swapping")
console.log(`x is ${xx} and y is ${yy}`)

