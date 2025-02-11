#include "Student.h"
#include "Professor.h"
#include "Department.h"

int main() {
    Student student1("John Doe", 20);
    Student student2("Jane Doe", 22);

    Professor profSmith("Dr. Smith", 45);

    Course math101("Math 101");
    Course physics101("Physics 101");
    Course chemistry101("Chemistry 101");

    student1.enrollCourse(&math101);
    student1.enrollCourse(&physics101);
    student2.enrollCourse(&physics101);

    profSmith.assignCourse(&math101);
    profSmith.assignCourse(&chemistry101);

    Department scienceDept("Science Department");
    scienceDept.addProfessor(&profSmith);
    scienceDept.addCourse(&math101);
    scienceDept.addCourse(&physics101);
    scienceDept.addCourse(&chemistry101);

    std::cout << "Student: " << student1.getName() << "\nAge: " << student1.getAge() << "\nEnrolled Courses:\n";
    student1.displayCourses();
    
    std::cout << "\nProfessor: " << profSmith.getName() << "\nAge: " << profSmith.getAge() << "\nAssigned Courses:\n";
    profSmith.displayCourses();

    std::cout << "\n";
    scienceDept.displayProfessorsAndCourses();

    return 0;
}








