let n = 30;
let arr = new Array(n + 1).fill(true);

// 0 and 1 are not primes
arr[0] = arr[1] = false;

for (let i = 2; i <= Math.floor(Math.sqrt(n)); i++) {
    if (arr[i]) {
        // Mark all multiples of i as false
        for (let j = i * i; j <= n; j += i) {
            arr[j] = false;
        }
    }
}

// Print all prime numbers
for (let i = 2; i <= n; i++) {
    if (arr[i]) {
        console.log(i);
    }
}
