ticket_num = int(input())

win = set(map(int, input().split()))

result = [0] * 7
for _ in range(ticket_num):
    ticket = set(map(int, input().split()))

    match = 0

    for v in ticket:
        if v in win:
            match += 1

    if match > 0:
        result[7 - match] += 1

print(*result)