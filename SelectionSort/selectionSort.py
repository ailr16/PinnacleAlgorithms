def findSmallest(dataArray):
    smallest = dataArray[0]
    smallest_index = 0

    for i in range(1, len(dataArray)):
        if dataArray[i] < smallest:
            smallest = dataArray[i]
            smallest_index = i
    
    return smallest_index

def selectionSort(dataArray):
    newArray = []

    for i in range(len(dataArray)):
        smallest = findSmallest(dataArray)
        newArray.append(dataArray.pop(smallest))

    return newArray


dataToSort = [12, 5, 34, 1, 16, 99]

#   smallest        original array          new array
#   1               12 5 34 16 99           1
#   5               12 34 16 99             1 5
#   12              34 16 99                1 5 12
#   16              34 99                   1 5 12 16
#   34              99                      1 5 12 16 34
#   99                                      1 5 12 16 34 99 

print(selectionSort(dataToSort))