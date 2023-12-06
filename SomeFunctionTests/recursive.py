def countdown(i):
    if i > 0:
        countdown(i - 1)

def fibonacci(n):
    if n <= 1:
        return n
    return fibonacci(n - 1) + fibonacci(n - 2)

def factorial(n):
    if n == 1 or n == 0:
        return 1
    return n*factorial(n-1)

def sumN_NatNum(n):
    if n == 1 or n == 0:
        return n
    return n + sumN_NatNum(n - 1)

def xPOWn(x, n):
    if n == 1:
        return x
    return x*xPOWn(x, n - 1)


test_num  = 4
test_numx = 0
test_x = 2
test_n = 8

#countdown(10)
print("Fibonacci(" + str(test_num) + ")=" + str(fibonacci(test_num)))
print(str(test_num) + "!=" + str(factorial(test_num)))
print(str(test_numx) + "!=" + str(factorial(test_numx)))
print("Sum of first " + str(test_num) + " natural numbers= " + str(sumN_NatNum(test_num)))
print(str(test_x) + "^" + str(test_n) + "= " + str(xPOWn(test_x, test_n)))