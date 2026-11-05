num = int(input().strip())

for i in range(2, num + 1):
    if num % i == 0:
        print(num // i)
        break