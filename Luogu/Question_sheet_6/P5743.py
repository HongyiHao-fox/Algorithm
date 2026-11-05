n = int(input())

def num_peach(n):
    if n == 1:
        return 1
    return 2 * num_peach(n - 1) + 2

print(num_peach(n))