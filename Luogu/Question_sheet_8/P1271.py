import sys

data = list(map(int, sys.stdin.read().split()))

candidate, vote = data[0], data[1]
tickets = data[2:2 + vote]
tickets.sort()

print(*tickets)

