let str = "0123456789";

console.log("length ||str.length || :", str.length);
console.log("length return type :", typeof str.length);
console.log("original str : ", str);

console.log("slice ||str.slice(1,5)|| :", str.slice(1, 5));
console.log("slice return type :", typeof str.slice(1, 5));
console.log("original str : ", str);

console.log("slice ||str.slice(-3,9)|| :", str.slice(-3, 9));
console.log("slice return type :", typeof str.slice(-3, 9));
console.log("original str : ", str);

/**
 * It does not work for -ve like slice
 */
console.log("substring ||str.substring(1,5)|| :", str.substring(1, 5));
console.log("substring return type :", typeof str.substring(1, 5));
console.log("original str : ", str);

console.log(`concat ||str.concat(" this is my","mobile number","I am from India")|| :`, 
    str.concat(" this is my", "mobile number", "I am from India"));
console.log("concat return type :", typeof str.concat(" this is my", "mobile number", "I am from India"));
console.log("original str : ", str);

console.log("trim ||str.trim()|| :", str.trim());
console.log("trim return type :", typeof str.trim());
console.log("original str : ", str);

console.log("indexOf ||str.indexOf('3')|| :", str.indexOf('3'));
console.log("indexOf return type :", typeof str.indexOf('3'));
console.log("original str : ", str);

console.log("lastIndexOf ||str.lastIndexOf('3')|| :", str.lastIndexOf('3'));
console.log("lastIndexOf return type :", typeof str.lastIndexOf('3'));
console.log("original str : ", str);

console.log("includes ||str.includes('45')|| :", str.includes('45'));
console.log("includes return type :", typeof str.includes('45'));
console.log("original str : ", str);

console.log("startsWith ||str.startsWith('012')|| :", str.startsWith('012'));
console.log("startsWith return type :", typeof str.startsWith('012'));
console.log("original str : ", str);

console.log("endsWith ||str.endsWith('89')|| :", str.endsWith('89'));
console.log("endsWith return type :", typeof str.endsWith('89'));
console.log("original str : ", str);

console.log("replace ||str.replace('123', 'XYZ')|| :", str.replace('123', 'XYZ'));
console.log("replace return type :", typeof str.replace('123', 'XYZ'));
console.log("original str : ", str);

console.log("replaceAll ||str.replaceAll('3', 'X')|| :", str.replaceAll('3', 'X'));
console.log("replaceAll return type :", typeof str.replaceAll('3', 'X'));
console.log("original str : ", str);

console.log("split ||str.split('3')|| :", str.split('3'));
console.log("split return type :", typeof str.split('3'));
console.log("original str : ", str);

console.log("charAt ||str.charAt(4)|| :", str.charAt(4));
console.log("charAt return type :", typeof str.charAt(4));
console.log("original str : ", str);

console.log("charCodeAt ||str.charCodeAt(4)|| :", str.charCodeAt(4));
console.log("charCodeAt return type :", typeof str.charCodeAt(4));
console.log("original str : ", str);
