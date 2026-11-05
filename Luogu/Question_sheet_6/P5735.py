x1, y1, x2, y2, x3, y3 = map(float, input().split())

def distance(x1, y1, x2, y2):
    return ((x2 - x1) ** 2 + (y2 - y1) ** 2) ** 0.5

a = distance(x1, y1, x2, y2)
b = distance(x2, y2, x3, y3)
c = distance(x3, y3, x1, y1)
print(f"{a + b + c:.2f}")