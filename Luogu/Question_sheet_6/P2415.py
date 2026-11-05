elements = list(map(int, sys.stdin.read().split()))
subset_sum = sum(elements) * (2 ** (len(elements) - 1))

print(subset_sum)