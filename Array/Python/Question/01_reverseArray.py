def reverseArray(arr):
    size = len(arr)
    start = 0
    end = size - 1
    while start <= end:
        temp = arr[start]
        arr[start] = arr[end]
        arr[end] = temp
        start += 1
        end -= 1
    for i in arr:
        print(i, end=" ")

originalArray = [1, 2, 3, 4, 5]
reverseArray(originalArray)
