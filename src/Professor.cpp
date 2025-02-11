#ifndef PROFESSOR_H
#define PROFESSOR_H

#include "Person.h"
#include <vector>

class Course; 

class Professor : public Person {
private:
    std::vector<Course*> courses;

public:
    Professor(std::string name, int age) : Person(name, age) {}

    void assignCourse(Course* course);
    void displayCourses() const;
};

#endif



