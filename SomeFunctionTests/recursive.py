def countdown(i):
    if i > 0:
        countdown(i - 1)

def fibonacci(n):
    if n <= 1:
        print("X")
        return n
    return fibonacci(n - 1) + fibonacci(n - 2)

#countdown(10)
print(fibonacci(7))