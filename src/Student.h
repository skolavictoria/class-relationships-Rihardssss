#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"
#include "Course.h"
#include <vector>

class Student : public Person {
private:
    std::vector<Course*> courses;

public:
    Student(std::string name, int age);

    void enrollCourse(Course* course);  
    void displayCourses() const;        
};

#endif












