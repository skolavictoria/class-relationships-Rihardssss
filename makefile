CXX = g++
CXXFLAGS = -std=c++17 -Wall -Wextra

SRC = src/main.cpp src/Person.cpp src/Student.cpp src/Professor.cpp src/Course.cpp src/Department.cpp
OBJ = $(SRC:.cpp=.o)

TARGET = university_system

$(TARGET): $(OBJ)
	$(CXX) $(OBJ) -o $(TARGET)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(TARGET)




