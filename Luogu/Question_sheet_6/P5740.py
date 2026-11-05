num = int(input())


class Student:
    def __init__(self, name, chinese, math, english):
        self.name = name
        self.chinese = chinese
        self.math = math
        self.english = english


students = []
for _ in range(num):
    name, chinese, math, english = input().split()
    students.append(Student(name, int(chinese), int(math), int(english)))

best_student = students[0]
for student in students[1:]:
    if (student.chinese + student.math + student.english >
            best_student.chinese + best_student.math + best_student.english):
        best_student = student

print(
    best_student.name,
    best_student.chinese,
    best_student.math,
    best_student.english,
)