def countItems(array:list):
    if len(array) == 0:
        return 0
    return 1 + countItems(array[1:])

test_array1 = [1, 1, 1]
test_array2 = [1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1]
test_array3 = [1, 1, 1, 1, 1, 1, 20000]

print("Items= " + str(countItems(test_array1)))
print("Items= " + str(countItems(test_array2)))
print("Items= " + str(countItems(test_array3)))