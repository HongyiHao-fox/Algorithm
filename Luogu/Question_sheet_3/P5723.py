Max_Num = int(input())

def is_prime(n):
    if n <= 1:
        return False
    for i in range(2, int(n ** 0.5) + 1):
        if n % i == 0:
            return False
    return True

total = 0
count = 0
for num in range(2, Max_Num + 1):
    if is_prime(num):
        if total + num > Max_Num:
            break
        total += num
        count += 1
        print(num)

print(count)