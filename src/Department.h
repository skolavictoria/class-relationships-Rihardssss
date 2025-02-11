#ifndef DEPARTMENT_H
#define DEPARTMENT_H

#include <iostream>
#include <vector>
#include <string>
#include "Professor.h"
#include "Course.h"
#include "Student.h"  

class Department {
private:
    std::string name;
    std::vector<Professor*> professors;
    std::vector<Course*> courses;

public:
    Department(const std::string& name) : name(name) {}

    void addProfessor(Professor* professor) {
        professors.push_back(professor);
    }

    void addCourse(Course* course) {
        courses.push_back(course);
    }

    void displayProfessorsAndCourses() const;
};

#endif







