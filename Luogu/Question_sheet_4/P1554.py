begin, end = map(int, input().split())

count = {'0' : 0, '1' : 0, '2' : 0, '3' : 0, '4' : 0, '5' : 0, '6' : 0, '7' : 0, '8' : 0, '9' : 0}
for i in range(begin, end + 1):
    i = str(i)
    for digit in i:
        count[digit] += 1

print(*[count[d] for d in '0123456789'])
