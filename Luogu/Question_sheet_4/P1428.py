num = int(input().strip())
arr = [int(x) for x in input().strip().split()]
num_More = []

for i in range(num):
    count = 0
    for j in range(i):
        if arr[j] < arr[i]:
            count += 1
    num_More.append(count)

print(*num_More)
