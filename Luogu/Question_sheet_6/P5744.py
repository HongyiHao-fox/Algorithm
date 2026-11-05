class Student:
    def __init__(self, name, age, score):
        self.name = name
        self.age = age
        self.score = score


def train(student):
    improved_score = min(600, student.score * 6 // 5)
    return Student(student.name, student.age + 1, improved_score)


n = int(input())

students = []
for _ in range(n):
    name, age, score = input().split()
    students.append(train(Student(name, int(age), int(score))))

for student in students:
    print(student.name, student.age, student.score)