a, b, c = map(int, input().split())
order = input().strip()

values = {'A': a, 'B': b, 'C': c}
print(*[values[ch] for ch in order])
