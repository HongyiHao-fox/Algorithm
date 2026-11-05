import sys

data = sys.stdin.read().split()
n = int(data[0])
num = list(map(int, data[1:n + 1]))

current = 1
best = 1

for i in range(1, n):
    if num[i] - num[i - 1] == 1:
        current += 1
        if current > best:
            best = current
    else:
        current = 1

print(best)
