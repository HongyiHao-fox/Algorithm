def leap(year):
    return (year % 4 == 0 and year % 100 != 0) or (year % 400 == 0)

begin, end = map(int, input().split())
count = 0
year_arr = []
for year in range(begin, end + 1):
    if leap(year):
        year_arr.append(year)
        count += 1
print(count)
print(*year_arr)