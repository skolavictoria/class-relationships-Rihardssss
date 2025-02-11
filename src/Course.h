#ifndef COURSE_H
#define COURSE_H

#include <vector>
#include <string>

class Student;

class Course {
private:
    std::string courseName;
    std::vector<Student*> students;  

public:
    Course(std::string name) : courseName(name) {}

    void enrollStudent(Student* student);  

    const std::vector<Student*>& getEnrolledStudents() const {
        return students;
    }

    std::string getCourseName() const {
        return courseName;
    }
};

#endif



















