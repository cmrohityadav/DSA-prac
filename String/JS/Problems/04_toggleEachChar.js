let str = "rOhiT";
let toggledStr = "";

for (let i = 0; i < str.length; i++) {
    let asciiValue = str.charCodeAt(i);
    
    if (asciiValue >= 65 && asciiValue <= 90) {  
        toggledStr += str[i].toLowerCase();
    } else {  
        toggledStr += str[i].toUpperCase();
    }
}

console.log(toggledStr);
