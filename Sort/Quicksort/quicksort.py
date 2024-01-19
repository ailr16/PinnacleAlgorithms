def quicksort(array:list):
    if len(array) < 2:
        return array
    else:
        pivot = array[0]
        less = [i for i in array[1:] if i <= pivot]
        greater = [i for i in array[1:] if i > pivot]

        return quicksort(less) + [pivot] + quicksort(greater)

array1 = [3, 2, 1]
array2 = [1, 2, 3 ,4 ,5]
array3 = [1, 2, -3 ,4 ,5, 90, -123]

print(array1)
print(quicksort(array1))
print("")
print(array2)
print(quicksort(array2))
print("")
print(array3)
print(quicksort(array3))