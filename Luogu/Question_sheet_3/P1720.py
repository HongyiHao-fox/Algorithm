def Fibonacci(n):
    a, b = 0, 1
    for _ in range(n):
        a, b = b, a + b
    return a

n = int(input())
print(f"{Fibonacci(n):.2f}")
