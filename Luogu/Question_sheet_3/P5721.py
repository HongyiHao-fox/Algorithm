n = int(input())

cur = 1

for i in range(1, n + 1):
    for j in range(1, n - i + 2):
        print(f"{cur:02d}", end='')
        cur += 1
    print()