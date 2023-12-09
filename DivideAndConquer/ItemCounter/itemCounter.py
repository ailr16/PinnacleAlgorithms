def countItems(array:list):
    if len(array) == 0:
        return 0
    array.pop()
    return 1 + countItems(array)

test_array1 = [1, 1, 1]
test_array2 = [1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1]

print("Items= " + str(countItems(test_array1)))
print("Items= " + str(countItems(test_array2)))