budget = [int(input()) for _ in range(12)]

cash = 0
saved = 0

for i in range(12):
    cash += 300
    cash -= budget[i]

    if cash < 0:
        print(-(i + 1))
        break

    to_save = (cash // 100) * 100
    saved += to_save
    cash -= to_save
else:
    print(cash + saved + saved // 5)
