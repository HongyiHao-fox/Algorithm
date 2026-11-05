n = int(input())
students = []
for _ in range(n):
    students.append(list(map(int, input().split())))

count = 0
for i in range(n):
    for j in range(i + 1, n):
        a, b = students[i], students[j]
        if (abs(a[0] - b[0]) <= 5 and
                abs(a[1] - b[1]) <= 5 and
                abs(a[2] - b[2]) <= 5 and
                abs(sum(a) - sum(b)) <= 10):
            count += 1

print(count)
