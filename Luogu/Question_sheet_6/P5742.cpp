#include <iostream>
#include <vector>

struct Student {
    int id;
    int academicScore;
    int qualityScore;
    double comprehensiveScore;

    int totalScore() const {
        return academicScore + qualityScore;
    }
};

bool isExcellent(const Student& student) {
    return student.totalScore() > 140 &&
           student.academicScore * 7 + student.qualityScore * 3 >= 800;
}

int main() {
    int n;
    std::cin >> n;

    std::vector<Student> students(n);
    for (Student& student : students) {
        std::cin >> student.id >> student.academicScore >> student.qualityScore;
        student.comprehensiveScore =
            student.academicScore * 0.7 + student.qualityScore * 0.3;
    }

    for (const Student& student : students) {
        std::cout << (isExcellent(student) ? "Excellent" : "Not excellent") << '\n';
    }
}