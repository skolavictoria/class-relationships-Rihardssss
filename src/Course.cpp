#include "Course.h"
#include "Student.h"  

void Course::enrollStudent(Student* student) {
    students.push_back(student);
}

