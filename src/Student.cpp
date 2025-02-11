#include "Student.h"
#include <iostream>

Student::Student(std::string name, int age) : Person(name, age) {}

void Student::enrollCourse(Course* course) {
    courses.push_back(course);
}

void Student::displayCourses() const {
    std::cout << "Enrolled Courses for " << name << ":\n";
    for (const auto& course : courses) {
        std::cout << "- " << course->getCourseName() << std::endl;
    }
}




