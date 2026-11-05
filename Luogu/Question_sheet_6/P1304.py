N = int(input())


def is_prime(number):
    if number < 2:
        return False
    for divisor in range(2, int(number ** 0.5) + 1):
        if number % divisor == 0:
            return False
    return True


for even_number in range(4, N + 1, 2):
    for first in range(2, even_number):
        second = even_number - first
        if is_prime(first) and is_prime(second):
            print(f"{even_number}={first}+{second}")
            break
