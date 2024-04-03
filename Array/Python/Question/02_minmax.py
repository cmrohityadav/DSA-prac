def maxMin(list):
    list.sort()
    print(list)
    min=list[0]
    max=list[-1]
    return [min,max]

list=[1,2,5,4,7,8,6,5,4,2]
list.sort()

print(maxMin(list))