def binary_search( list, item ):
    low = 0
    high = len(list) - 1

    while low <= high:
        mid = int((low + high) / 2)
        actual_item = list[mid]

        if actual_item == item:
            return mid

        if actual_item > item:
            high = mid - 1
        
        else:
            low = mid + 1
    
    return None

    
list1 = [1, 2, 3, 4, 5, 6, 7]
print( binary_search( list1, 2 ) )