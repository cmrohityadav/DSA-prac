let arr = [0, 1, 2, 3, 4, 5, 60, 70, 80, 90, 100];
let target = 90;

function binarySearch(arr, target) {
    let first = 0;
    let last = arr.length - 1;

    while (first <= last) {
        let mid = Math.floor((first + last) / 2);

        if (arr[mid] === target) {
            console.log("Index:", mid, "Target Value:", target);
            return mid;
        }

        if (arr[mid] > target) {
            last = mid - 1;
        } else {
            first = mid + 1;
        }
    }

    console.log("Target not found.");
    return -1;
}

binarySearch(arr, target);
