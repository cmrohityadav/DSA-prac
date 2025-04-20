# Bubble Sort
- Bubble Sort is a simple sorting algorithm that works by repeatedly swapping the adjacent elements if they are in the wrong order
## 🧼 Bubble Sort – Step-by-Step Guide

Bubble Sort is a simple sorting algorithm that repeatedly steps through the list, compares adjacent elements, and swaps them if they are in the wrong order. The largest unsorted value "bubbles" to its correct position at the end in each pass.

---

## ✅ Goal

Sort an array of numbers in **ascending order** using Bubble Sort.

Example:
```js
Input:  [5, 1, 4, 2, 8]
Output: [1, 2, 4, 5, 8]
```

---

## 📌 Step-by-Step Process

### 🔹 Step 1: Understand the Problem

We are given an array `arr[]`.  
We need to repeatedly compare `arr[i]` with `arr[i + 1]` and swap them if `arr[i] > arr[i + 1]`.

---

### 🔹 Step 2: Outer Loop (Pass Counter)

We need `n-1` passes to sort the array of `n` elements.

```js
for (let i = 0; i < n - 1; i++) {
    // Each pass pushes the next largest element to the end
}
```

---

### 🔹 Step 3: Inner Loop (Comparisons and Swapping)

In each pass, compare adjacent elements and swap them if out of order.

```js
for (let j = 0; j < n - 1 - i; j++) {
    if (arr[j] > arr[j + 1]) {
        // Swap them
    }
}
```

Subtracting `i` avoids comparing already sorted elements at the end.

---

### 🔹 Step 4: Swap Logic

```js
let temp = arr[j];
arr[j] = arr[j + 1];
arr[j + 1] = temp;
```

---

### ✅ Full Code

```js
let arr = [5, 1, 4, 2, 8];
let n = arr.length;

for (let i = 0; i < n - 1; i++) {
    for (let j = 0; j < n - 1 - i; j++) {
        if (arr[j] > arr[j + 1]) {
            let temp = arr[j];
            arr[j] = arr[j + 1];
            arr[j + 1] = temp;
        }
    }
}

console.log("Sorted Array:", arr);
```

---

## 𝳷 Example Dry Run

### Input:
```js
[5, 1, 4, 2, 8]
```

### Pass 1:
- Compare 5 and 1 → Swap → `[1, 5, 4, 2, 8]`
- Compare 5 and 4 → Swap → `[1, 4, 5, 2, 8]`
- Compare 5 and 2 → Swap → `[1, 4, 2, 5, 8]`
- Compare 5 and 8 → No Swap

### Pass 2:
- Compare 1 and 4 → No Swap
- Compare 4 and 2 → Swap → `[1, 2, 4, 5, 8]`
- Compare 4 and 5 → No Swap

### Pass 3:
- Compare 1 and 2 → No Swap
- Compare 2 and 4 → No Swap

### Pass 4:
- Already sorted

---

## ✨ Output

```js
Sorted Array: [1, 2, 4, 5, 8]
```

---

## ⚡ Optimization Tip

Add a `swapped` flag to exit early if the array is already sorted in a pass.

---

## 🧠 Time and Space Complexity

- **Time Complexity:** O(n²)
- **Space Complexity:** O(1) — in-place sort

---

## 💡 When to Use

- Good for educational purposes
- Not recommended for large datasets due to inefficiency


# Selection Sort - Step-by-Step Guide

Selection Sort is a simple comparison-based sorting algorithm. It works by repeatedly finding the minimum element (considering ascending order) from the unsorted part and putting it at the beginning.

## How Selection Sort Works

1. Start from the beginning of the array.
2. Assume the first element is the minimum.
3. Compare this minimum with every other element in the unsorted portion.
4. If a smaller element is found, mark that as the new minimum.
5. After finishing one pass, swap the smallest element found with the first element.
6. Move to the next position and repeat until the array is sorted.

---

## JavaScript Code
```javascript
let arr = [10, 5, 12, 1, 3];
let n = arr.length;

for (let i = 0; i < n - 1; i++) {
    let minIndex = i;
    for (let j = i + 1; j < n; j++) {
        if (arr[j] < arr[minIndex]) {
            minIndex = j;
        }
    }
    if (minIndex !== i) {
        let temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}

console.log(arr);
```

---

## Dry Run Example

Initial Array: `[10, 5, 12, 1, 3]`

### Pass 1:
- Find min from index 0 to 4 → `1` at index 3
- Swap `10` and `1`
- Array: `[1, 5, 12, 10, 3]`

### Pass 2:
- Find min from index 1 to 4 → `3` at index 4
- Swap `5` and `3`
- Array: `[1, 3, 12, 10, 5]`

### Pass 3:
- Find min from index 2 to 4 → `5` at index 4
- Swap `12` and `5`
- Array: `[1, 3, 5, 10, 12]`

### Pass 4:
- Find min from index 3 to 4 → already sorted
- Array: `[1, 3, 5, 10, 12]`

---

## Time and Space Complexity
- Time: O(n²)
- Space: O(1) (in-place)

---

Let me know if you'd like a version in C++, Python, or a diagram for this!

