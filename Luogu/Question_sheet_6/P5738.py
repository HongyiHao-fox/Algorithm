n, m = map(int, input().split())

matrix = []
for _ in range(n):
    row = list(map(int, input().split()))
    matrix.append(row)

def score(matrix):
    best_score = 0
    for row in matrix:
        current_score = (sum(row) - min(row) - max(row)) / (m - 2)
        best_score = max(best_score, current_score)
    return best_score


print(f"{score(matrix):.2f}")