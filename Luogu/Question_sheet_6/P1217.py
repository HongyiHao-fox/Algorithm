Min_Num = int(input())
Max_Num = int(input())

def is_prime(n):
    if n <= 1:
        return False
    for i in range(2, int(n ** 0.5) + 1):
        if n % i == 0:
            return False
    return True

def is_palindrome(n):
    s = str(n)
    return s == s[::-1]

for num in range(Min_Num, Max_Num + 1):
    if is_prime(num) and is_palindrome(num):
        print(num)
        print("\n")