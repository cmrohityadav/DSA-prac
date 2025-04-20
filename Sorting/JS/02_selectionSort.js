let arr = [10, 5, 12, 1, 3];
let n = arr.length;
console.log("Unsorted Array ", arr)
for (let i = 0; i < n - 1; i++) {

    let minIndex = i;

    for (let j = i + 1; j < n; j++) {

        if (arr[j] < arr[minIndex]) {
            minIndex = j
        }

    }

    if (i !== minIndex) {
        let temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }


}

console.log("Sorted Array   ", arr)