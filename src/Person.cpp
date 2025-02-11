#include "Person.h"

Person::Person(std::string name, int age) : name(name), age(age) {}

Person::~Person() {}

void Person::displayInfo() const {
    std::cout << "Name: " << name << ", Age: " << age << std::endl;
}


