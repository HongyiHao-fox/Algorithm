a, b = map(int, input().split())

def is_prime(n):
    if n <= 1:
        return False
    for i in range(2, int(n ** 0.5) + 1):
        if n % i == 0:
            return False
    return True

palindromes = [11]
for h in range(1, 10000):
    s = str(h)
    palindromes.append(int(s + s[-2::-1]))

palindromes.sort()

for p in palindromes:
    if a <= p <= b and is_prime(p):
        print(p)
