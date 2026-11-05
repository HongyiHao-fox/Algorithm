s = input().strip().replace('-', '')

nums = s[:-1]
check = s[-1]

total = sum(int(nums[i]) * (i + 1) for i in range(9))
res = total % 11
correct = 'X' if res == 10 else str(res)

if check == correct:
    print('Right')
else:
    print(nums + correct)