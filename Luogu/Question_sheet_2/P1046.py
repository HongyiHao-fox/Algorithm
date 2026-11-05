arr = list(map(int, input().split()))
hight = int(input())
reach = hight + 30

count = 0
for h in arr:
    if h <= reach:
        count += 1

print(count)