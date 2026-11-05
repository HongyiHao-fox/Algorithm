n, k = map(int, input().split())

sum_a = 0
sum_b = 0
count_a = 0
count_b = 0

for x in range(1, n + 1):
    if x % k == 0:
        sum_a += x
        count_a += 1
    else:
        sum_b += x
        count_b += 1

avg_a = sum_a / count_a
avg_b = sum_b / count_b

print(f"{avg_a:.1f} {avg_b:.1f}")

