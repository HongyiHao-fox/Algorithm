def prime(n):
    if n < 2:
        return False
    for i in range(2, int(n ** 0.5) + 1):
        if n % i == 0:
            return False
    return True

num = int(input())
arr = list(map(int, input().split()))

print(*[x for x in arr if prime(x)])