num = int(input().strip())

arr = [num]

while num != 1:
    if num % 2 == 0:
        num //= 2
    else:
        num = 3 * num + 1
    arr.append(num)

print(*arr[::-1])
