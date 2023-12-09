def numberArraySum(array:list):
    if array == []:
        return 0
    return array[0] + numberArraySum(array[1:])

test_array1 = [1, 2, 3, 4 ,5]
test_array2 = [1, 2, 3, 4 ,5, 20, 30, 12, 4, 12, 18]
test_array3 = [16]
test_array4 = []

print("Sum result= " + str(numberArraySum(test_array1)))
print("Sum result= " + str(numberArraySum(test_array2)))
print("Sum result= " + str(numberArraySum(test_array3)))
print("Sum result= " + str(numberArraySum(test_array4)))