def max(array:list):
    if len(array) == 2:
        return array[0] if array[0] > array[1] else array[1]
    aux = max(array[1:])
    return array[0] if array[0] > aux else aux
    
    
test_array1 = [2, 1, 5, 8, 4]
test_array2 = [-1, -2, -3, -4, -5]
test_array3 = [2, 1, 5, 8, 4, 99, -16, 1001]

print("Max= " + str(max(test_array1)))
print("Max= " + str(max(test_array2)))
print("Max= " + str(max(test_array3)))