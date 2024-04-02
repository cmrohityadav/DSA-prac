def reverseArray(array):
    reversedArray=array[::-1]

    print("reversed array")
    for i in reversedArray:
        print(i,end=" ")


orignalArray=[1,2,3,4,5]
reverseArray(orignalArray)