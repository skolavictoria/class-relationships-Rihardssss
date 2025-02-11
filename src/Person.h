#ifndef PERSON_H
#define PERSON_H

#include <string>
#include <iostream>

class Person {
protected:
    std::string name;
    int age;

public:
    Person(std::string name, int age);  
    virtual ~Person(); 

    virtual void displayInfo() const;  

    std::string getName() const { return name; }
    int getAge() const { return age; }
};

#endif











