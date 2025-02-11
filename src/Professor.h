#ifndef PROFESSOR_H
#define PROFESSOR_H

#include "Person.h"
#include "Course.h"
#include <vector>

class Professor : public Person {
private:
    std::vector<Course*> courses;

public:
    Professor(std::string name, int age) : Person(name, age) {}

    void assignCourse(Course* course) {
        courses.push_back(course);
    }

    void displayCourses() const {
        std::cout << "Courses taught by " << name << ":\n";
        for (const auto& course : courses) {
            std::cout << "- " << course->getCourseName() << std::endl;
        }
    }
};

#endif







