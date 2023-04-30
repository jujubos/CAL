CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++11
SRC = $(wildcard *.cpp)
OBJ = $(SRC:.cpp=.o)
TARGET = myprogram

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) $^ -o $@

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(TARGET)
