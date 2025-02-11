#include "Department.h"
#include "Professor.h"
#include "Course.h"
#include "Student.h"  

void Department::displayProfessorsAndCourses() const {
    std::cout << "Department: " << name << "\n";

    std::cout << "Professors:\n";
    for (const auto& professor : professors) {
        std::cout << "- " << professor->getName() << "\n";
    }

    std::cout << "Courses:\n";
    for (const auto& course : courses) {
        std::cout << "- " << course->getCourseName() << "\n";

        const auto& students = course->getEnrolledStudents();
        if (!students.empty()) {
            std::cout << "  Enrolled Students:\n";
            for (const auto& student : students) {
                std::cout << "  - " << student->getName() << "\n";
            }
        } else {
            std::cout << "  No students enrolled.\n";
        }
    }
}







