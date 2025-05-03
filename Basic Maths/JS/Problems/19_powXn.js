const powXn = function(x, n) {
    if (n === 0) return 1;
    let ans = tempXn(x, Math.abs(n));
    return n < 0 ? 1 / ans : ans;
};

function tempXn(x, n) {
    if (n === 0) return 1;
    let ans = tempXn(x, Math.floor(n / 2));
    if (n % 2 === 0) return ans * ans;
    return ans * ans * x;
}

console.log(powXn(2, 2));    // 4
console.log(powXn(2, -3));   // 0.125
console.log(powXn(5, 0));    // 1