target = float(input())
speed = 2
total = 0
count = 0

while total < target:
    total += speed
    speed *= 0.98
    count += 1

print(count)
