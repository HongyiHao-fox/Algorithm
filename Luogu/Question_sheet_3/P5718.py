Number = int(input())

nums = list(map(int, input().split()))

min = nums[0]
for i in range(Number):
    if nums[i] < min:
        min = nums[i]

print(min)
