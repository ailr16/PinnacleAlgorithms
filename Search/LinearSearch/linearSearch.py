def search( l:list, item ):
    for i in range( len( l ) ):
        if l[i] == item:
            return i
        

list1 = [ 1, 2, 3, 4, 5 ]
list2 = [ "a", "b", "c", "d", "e" ]

print( search( list1, 4 ) )
print( search( list1, 7 ) )
print( search( list2, 7 ) )
print( search( list2, "e" ) )